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

//main.cpp

#include <QtGui>
#include "mainwindow.h"

int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  MainWindow mainWindow;

  mainWindow.show();
  return app.exec();
}
