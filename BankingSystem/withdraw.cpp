#include "withdraw.h"
#include "ui_withdraw.h"

Withdraw::Withdraw(Card* card,QMainWindow *before, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->before = before;
    this->card = card;
    ui->label->setText("Enter the amount to withdraw.\n\nAvailable amount : $" + QString::number(this->card->getBalance()));

}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_pushButton_1_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "1");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void Withdraw::on_pushButton_2_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "2");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}



void Withdraw::on_pushButton_3_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "3");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_4_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "4");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_5_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "5");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_6_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "6");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_7_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "7");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_8_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "8");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_9_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "9");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void Withdraw::on_pushButton_0_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "0");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void Withdraw::on_clearButton_clicked()
{
    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);
}

void Withdraw::on_enterButton_clicked()
{

    QString input = ui->lineEdit->text();

    int amount = stoi(input.toStdString());

    if(amount > card->getBalance()){
        ui->errorLabel->setText("Insufficient funds.");

    }else if(amount == 0){
        ui->errorLabel->setText("Invalid amount.");

    }else{
        card->setBalance(card->getBalance()-amount);
        ui->label->setText("Enter the amount to withdraw.\n\nAvailable amount : $" + QString::number(this->card->getBalance()));
        ui->errorLabel->setText("Success");

    }

    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);

}

void Withdraw::on_exitButton_clicked()
{
    before->setEnabled(true);
    close();
}
