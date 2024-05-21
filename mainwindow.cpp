//
// Created by Ricky on 15/05/2024.
//
#include "mainwindow.h"
#include "MainCPPport.h"
#include "MainPortThread.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QDoubleValidator>
#include <QLabel>
#include <QDialog>
#include <QApplication>
#include <QMovie>
#include <iostream>
#include <QMediaPlayer>
#include <QLibrary>



MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent)
{
    //  pluginad, et saaks QMediaPlayerit kasutada
    QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath() + "/plugins");
    QStringList libraryPaths = QCoreApplication::libraryPaths();

    resize(400, 400);

    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Layout, kuhu kõik elemendid paigutatakse
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);


    // Sisendi faili valimine
    inputFilePathEdit = new QLineEdit();
    inputFileButton = new QPushButton("Vali sisendi fail", this);
    inputFileButton->setFixedWidth(400);
    connect(inputFileButton, &QPushButton::clicked, this, &MainWindow::pickInputFile);
    QHBoxLayout *inputFileLayout = new QHBoxLayout;
    inputFileLayout->addStretch();
    inputFileLayout->addWidget(inputFileButton);
    inputFileLayout->addStretch();

    // Väljundi faili nime valimine
    outputFileNameEdit = new QLineEdit(this);
    outputFileNameEdit->setPlaceholderText("Sisetage väljundi faili nimi: ");


    // Väljundi faili kausta valimine
    outputDirPathEdit = new QLineEdit();
    outputDirButton = new QPushButton("Valige kaust, kuhu väljundi fail salvestatakse", this);
    outputDirButton->setFixedWidth(400);
    connect(outputDirButton, &QPushButton::clicked, this, &MainWindow::pickOutputDirectory);
    QHBoxLayout *outputDirLayout = new QHBoxLayout;
    outputDirLayout->addStretch();
    outputDirLayout->addWidget(outputDirButton);
    outputDirLayout->addStretch();


    // Kinnitamise nupp
    verifyButton = new QPushButton("Kinnita", this);
    verifyButton->setFixedWidth(100);
    connect(verifyButton, &QPushButton::clicked, this, &MainWindow::onOkButtonClicked);


    // Float sisendi väljad
    floatInput1 = new QLineEdit();
    floatInput1->setPlaceholderText("Sisestage ruudu suurus(grid size): (by default 1)");

    floatInput2 = new QLineEdit();
    floatInput2->setPlaceholderText("Sisestage aluse tihedus(bottom thickness): (by default 10)");


    // Validaatorid, et ainult ujukoma arve saaks sisestada
    QDoubleValidator *validator1 = new QDoubleValidator(this);
    QDoubleValidator *validator2 = new QDoubleValidator(this);
    floatInput1->setValidator(validator1);
    floatInput2->setValidator(validator2);


    // QHBoxLayout OK nupu jaoks
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(verifyButton);

    layout->addLayout(inputFileLayout);
    layout->addWidget(outputFileNameEdit);
    layout->addLayout(outputDirLayout);

    layout->addWidget(floatInput1);
    layout->addWidget(floatInput2);
    layout->addLayout(buttonLayout);


}

void MainWindow::pickInputFile() {
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open Input File"));
    if (!filePath.isEmpty())
        inputFilePathEdit->setText(filePath);
}

void MainWindow::pickOutputDirectory() {
    QString dirPath = QFileDialog::getExistingDirectory(this, tr("Select Output Directory"));
    if (!dirPath.isEmpty())
        outputDirPathEdit->setText(dirPath);
}

void MainWindow::runMainPort() {
    showLoadingAnimation();

    auto *thread = new MainPortThread( getInputFilePath(), getOutputFileName(), getOutputDirPath(), std::stof(getFloatInput1()), std::stof(getFloatInput2()));

    connect(thread, &QThread::finished, this, [this, thread]() {
        loadingMovie->stop();
        loadingLabel->hide();
        thread->deleteLater();

        QDialog *dialog = new QDialog(this);
        dialog->setFixedSize(200, 100);

        QVBoxLayout *layout = new QVBoxLayout(dialog);

        QPushButton *closeButton = new QPushButton("Close Program", dialog);
        QPushButton *resetButton = new QPushButton("Reset Program", dialog);

        layout->addWidget(closeButton);
        layout->addWidget(resetButton);

        connect(closeButton, &QPushButton::clicked, this, &MainWindow::quit);
        connect(resetButton, &QPushButton::clicked, this, &MainWindow::resetProgram);
        connect(resetButton, &QPushButton::clicked, dialog, &QDialog::close);
        resize(400, 400);

        dialog->exec();
    });


    connect(thread, &QThread::finished, thread, &QObject::deleteLater);

    //connect(thread, &QThread::finished, qApp, &QCoreApplication::quit);// lopetab programmi kui thread labi saab

    thread->start();
}

bool MainWindow::isFineOrNot(){
    if (getInputFilePath() == ""){
        return false;
    }
    if (getOutputFileName() == ""){
        return false;
    }
    if (getOutputDirPath() == ""){
        return false;
    }
    return true;
}

void MainWindow::printInputs() {

    // Kas kasutaja sisestas kõik vajalikud väljad
    if (!isFineOrNot()){
        isNotFine();
        return;
    }
    // Kui kasutaja ei sisesta grid size, siis on see 0.5
    if (getFloatInput1() == ""){
        setFloatInput1("1.0");
    }
    // Kui kasutaja ei sisesta aluse tihedust, siis on see 0.5
    if (getFloatInput2() == ""){
        setFloatInput2("10.0");
    }

    runMainPort();
    std::cout << "Input File Path: " << getInputFilePath() << std::endl;
    std::cout << "Output File Name: " << getOutputFileName() << std::endl;
    std::cout << "Output Directory Path: " << getOutputDirPath() << std::endl;
    std::cout << "Grid Size: " << getFloatInput1() << std::endl;
    std::cout << "Bottom Thickness: " << getFloatInput2() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

}

void MainWindow::onOkButtonClicked() {
    QDialog *dialog = new QDialog(this);

    dialog->setFixedSize(200, 100);

    QVBoxLayout *layout = new QVBoxLayout(dialog);


    QLabel *label = new QLabel("Kindel, et valisid õige faili?", dialog);
    layout->addWidget(label);

    QHBoxLayout *buttonLayout = new QHBoxLayout;


    QPushButton *yesButton = new QPushButton("Jah", dialog);
    QPushButton *noButton = new QPushButton("Ei", dialog);
    buttonLayout->addWidget(yesButton);
    buttonLayout->addWidget(noButton);
    layout->addLayout(buttonLayout);


    connect(yesButton, &QPushButton::clicked, this, &MainWindow::printInputs);
    connect(yesButton, &QPushButton::clicked, dialog, &QDialog::close);
    connect(noButton, &QPushButton::clicked, dialog, &QDialog::reject);

    dialog->exec();
}

void MainWindow::updateTextEdit() {
    std::string coutString = m_coutStream.str();
    m_coutStream.str(std::string());
    // Näitab couti teksti QTextEditis juhul kui sinna on tulnud midagi
    if (!coutString.empty()) {
        textEdit->append(QString::fromStdString(coutString));
    }
}

void MainWindow::showLoadingAnimation() {
    // Peidab eelmised elemendid
    inputFileButton->hide();
    outputFileNameEdit->hide();
    outputDirButton->hide();
    floatInput1->hide();
    floatInput2->hide();
    verifyButton->hide();

    loadingTextLabel = new QLabel("Loading...", this);


    // Teeb fonti suuremaks
    QFont font = loadingTextLabel->font();
    font.setPointSize(24);
    loadingTextLabel->setFont(font);


    // Teeb QLabeli gifi jaoks
    loadingLabel = new QLabel(this);
    loadingLabel->setFixedSize(50, 50); // Adjust the size as needed
    loadingLabel->setScaledContents(true);
    loadingMovie = new QMovie(":/images/duck_loading.gif");

    // Kontroll kas gifi laadimine õnnestus
    if (!loadingMovie->isValid()) {
        qWarning() << loadingMovie->lastErrorString();
        qWarning("Failed to load GIF!");
    }

    loadingLabel->setMovie(loadingMovie);
    loadingMovie->start();

    // Teeb suure layouti kõige jaoks
    QHBoxLayout *loadingLayout = new QHBoxLayout;
    loadingLayout->addWidget(loadingTextLabel);
    loadingLayout->addWidget(loadingLabel);
    loadingLayout->setAlignment(Qt::AlignLeft);

    // Paigutab layouti
    QVBoxLayout *mainLayout = qobject_cast<QVBoxLayout*>(centralWidget()->layout());
    if (mainLayout) {
        mainLayout->addLayout(loadingLayout);

        textEdit = new QTextEdit(this);
        textEdit->setReadOnly(true); //
        textEdit->setFixedHeight(350); //
        mainLayout->addWidget(textEdit);
    } else {
        qWarning("Failed to cast layout to QVBoxLayout!");
    }
    // vajalik et couti teksti näidata
    std::cout.rdbuf(m_coutStream.rdbuf());

    // Ühendab QTimeri updateTextEdit slotiga
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTextEdit);
    timer->start(100);

}

void MainWindow::isNotFine(){
    QDialog *dialog = new QDialog(this);

    dialog->setFixedSize(300, 100);

    QVBoxLayout *layout = new QVBoxLayout(dialog);

    QLabel *label = new QLabel("Sa ei sisestanud kõiki vajalikke väärtusi!", dialog);
    QLabel *label2 = new QLabel("Proovi uuesti >:( ", dialog);
    layout->addWidget(label);
    layout->addWidget(label2);

    QHBoxLayout *buttonLayout = new QHBoxLayout;


    QPushButton *okButton = new QPushButton("ok", dialog);
    buttonLayout->addWidget(okButton);
    layout->addLayout(buttonLayout);


    connect(okButton, &QPushButton::clicked, dialog, &QDialog::close);

    dialog->exec();
}

void MainWindow::resetProgram() {
    // tühjendab kõik väljad ja
    inputFilePathEdit->clear();
    outputFileNameEdit->clear();
    outputDirPathEdit->clear();
    floatInput1->clear();
    floatInput2->clear();



    // näitab uuesti kõiki elemente
    inputFileButton->show();
    outputFileNameEdit->show();
    outputDirButton->show();
    floatInput1->show();
    floatInput2->show();
    verifyButton->show();


    textEdit->hide();
    textEdit->clear();

    loadingTextLabel->hide();

    if (resetDialog) {
        resetDialog->close();
    }

    // aken algsesse suurusesse
    this->resize(400, 400);
    resize(400, 400);

}
