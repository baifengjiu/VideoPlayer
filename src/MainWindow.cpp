#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow()
    :QMainWindow(nullptr)
{
    ui = new Ui::MainWindow;

}

MainWindow::~MainWindow()
{
    delete ui;

}
