#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    bank = new Bank(4);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "1");
    ui->enterButton->setEnabled(true);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "2");
    ui->enterButton->setEnabled(true);
}



void MainWindow::on_pushButton_3_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "3");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "4");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "5");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "6");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "7");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "8");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "9");
    ui->enterButton->setEnabled(true);
}

void MainWindow::on_pushButton_0_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "0");
    ui->enterButton->setEnabled(true);
}


void MainWindow::on_clearButton_clicked()
{
    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);
}

void MainWindow::on_enterButton_clicked()
{
    QString input = ui->lineEdit->text();

    int accNum = stoi(input.toStdString());

    auto it = bank->getCards().find(accNum);

    cout << it->first << endl;

    if(it != bank->getCards().end()){
        // change to pin
    }else{
        ui->lineEdit->setText("");
        ui->errorLabel->setText("Invalid Account Number");
    }

}
