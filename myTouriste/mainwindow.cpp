#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddPackage = new AddPackage();
    ptrFindPackage = new FindPackage();
}

MainWindow::~MainWindow()
{
    delete ptrAddPackage;
    delete ptrFindPackage;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ptrAddPackage->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrFindPackage->show();
}

