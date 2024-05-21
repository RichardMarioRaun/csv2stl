//
// Created by Ricky on 15/05/2024.
//

#ifndef CSV2STL_MAINWINDOW_H
#define CSV2STL_MAINWINDOW_H


#include <QMainWindow>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QMovie>
#include <QTimer>
#include <iostream>
#include <QDialog>
#include <QTextEdit>
#include <sstream>

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

public slots:
    void pickInputFile();
    void pickOutputDirectory();
    void onOkButtonClicked();
    void printInputs();
    void showLoadingAnimation();
    void updateTextEdit();
    void resetProgram();

    std::string getInputFilePath(){
        return inputFilePathEdit->text().toStdString();
    };
    std::string getOutputFileName(){
        return outputFileNameEdit->text().toStdString();
    };
    std::string getOutputDirPath(){
        return outputDirPathEdit->text().toStdString();
    };

    std::string getFloatInput1(){
        return floatInput1->text().toStdString();
    };
    std::string getFloatInput2(){
        return floatInput2->text().toStdString();
    };
    void setFloatInput1(const std::string &text){
        floatInput1->setText(QString::fromStdString(text));
    };
    void setFloatInput2(const std::string &text){
        floatInput2->setText(QString::fromStdString(text));
    };

    void setInputFilePath(const std::string &text){
        inputFilePathEdit->setText(QString::fromStdString(text));
    };
    void setOutputFileName(const std::string &text){
        outputFileNameEdit->setText(QString::fromStdString(text));
    };
    void setOutputDirPath(const std::string &text){
        outputDirPathEdit->setText(QString::fromStdString(text));
    };


    void runMainPort();

    std::string getInfoAboutProgram(){
        return infoAboutProgram.toStdString();
    }

    void setInfoAboutProgram(const std::string &text){
        infoAboutProgram = QString::fromStdString(text);
    }

    void quit(){
        qApp->quit();
    }
    bool isFineOrNot();
    void isNotFine();

private:
    QLineEdit *inputFilePathEdit;
    QLineEdit *outputFileNameEdit;
    QLineEdit *outputDirPathEdit;
    QLineEdit *floatInput1;
    QLineEdit *floatInput2;

    QString dirPath;
    QString filePath;

    QString infoAboutProgram;


    QPushButton *inputFileButton;
    QPushButton *outputDirButton;
    QPushButton *verifyButton;



    QLabel *loadingLabel;
    QMovie *loadingMovie;
    QLabel *loadingTextLabel;
    QHBoxLayout *loadingLayout;
    QVBoxLayout *mainLayout;
    QDialog *resetDialog;

    QTextEdit *textEdit;
    std::ostringstream m_coutStream;


};

#endif //CSV2STL_MAINWINDOW_H