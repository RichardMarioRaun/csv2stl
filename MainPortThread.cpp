//
// Created by Ricky on 17/05/2024.
//

#include "MainPortThread.h"
#include "MainCPPport.h"
#include "mainwindow.h"

MainPortThread::MainPortThread(const std::string& inputFilePath, const std::string& outputFileName, const std::string& outputDirPath, float gridSize, float bottomThickness)
        : inputFilePath(inputFilePath), outputFileName(outputFileName), outputDirPath(outputDirPath), gridSize(gridSize), bottomThickness(bottomThickness)
{
}

void MainPortThread::run()
{
    mainPort(inputFilePath, outputFileName, outputDirPath, gridSize, bottomThickness);
    quit();
}