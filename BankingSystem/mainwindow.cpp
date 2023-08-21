#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->textBrowser->insertPlainText("1");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->insertPlainText("2");
}


