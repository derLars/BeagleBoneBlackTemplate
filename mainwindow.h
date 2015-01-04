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

//mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
