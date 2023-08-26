#include "depositwindow.h"
#include "ui_depositwindow.h"

DepositWindow::DepositWindow(Card *card,QMainWindow *before,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DepositWindow)
{

    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->card = card;
    this->before = before;
    ui->label->setText("Enter the amount to deposit.\n\nCurrent amount : $" + QString::number(this->card->getBalance()));
}

DepositWindow::~DepositWindow()
{
    delete ui;
}

void DepositWindow::on_pushButton_1_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "1");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void DepositWindow::on_pushButton_2_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "2");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}



void DepositWindow::on_pushButton_3_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "3");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_4_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "4");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_5_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "5");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_6_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "6");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_7_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "7");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_8_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "8");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_9_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "9");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void DepositWindow::on_pushButton_0_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "0");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void DepositWindow::on_clearButton_clicked()
{
    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);
}

void DepositWindow::on_enterButton_clicked()
{
    QString input = ui->lineEdit->text();
    int amount = stoi(input.toStdString());

    if( amount > 0){
        card->setBalance(card->getBalance()+amount);
        ui->label->setText("Enter the amount to deposit.\n\nCurrent amount : $" + QString::number(this->card->getBalance()));
        ui->errorLabel->setText("Success");

    }else{
        ui->errorLabel->setText("Invalid amount.");

    }

    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);

}

void DepositWindow::on_exitButton_clicked()
{
    before->setEnabled(true);
    close();
}
