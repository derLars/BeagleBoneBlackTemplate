//##################################################
//#Sunday, 04.Januar.2015 made by Lars C. Schwensen#
//##################################################

//#################################################################
//#This is a QT template for BeagleBone Black #
//#DEVICE: BeagleBone Black #
//#DEVELOPMENT BOARD: - #
//#PROGRAMMER: - #
//Notice: - #
//#################################################################

//mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
