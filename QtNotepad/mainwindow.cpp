#include "mainwindow.h"
#include "ui_mainwindow.h"

//main application class definition
MainWindow::MainWindow(QWidget *parent) //constructor
    : QMainWindow(parent) //calls the QMainWindow parent constructor
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit); //this means that textEdit is going to take up all of the screen
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{

}



