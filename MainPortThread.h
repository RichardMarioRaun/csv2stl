//
// Created by Ricky on 17/05/2024.
//

#ifndef MAINPORTTHREAD_H
#define MAINPORTTHREAD_H

#include <QThread>
#include <string>
#include "mainwindow.h"

class MainPortThread : public QThread
{
Q_OBJECT

public:
    MainPortThread(const std::string& inputFilePath, const std::string& outputFileName, const std::string& outputDirPath, float gridSize, float bottomThickness);
    void run() override;

private:
    std::string inputFilePath;
    std::string outputFileName;
    std::string outputDirPath;
    float gridSize;
    float bottomThickness;
};

#endif // MAINPORTTHREAD_H
