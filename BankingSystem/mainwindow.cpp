#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loggedin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Disable the minimize, maximize, and close buttons
    setWindowFlags(Qt::FramelessWindowHint);
    bank = new Bank(4);
    currAcc = -1;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enableWindow(bool value){
    if(value == true){
        setEnabled(true);
    }else{
        setEnabled(false);
    }

}


void MainWindow::on_pushButton_1_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "1");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void MainWindow::on_pushButton_2_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "2");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}



void MainWindow::on_pushButton_3_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "3");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_4_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "4");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_5_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "5");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_6_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "6");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_7_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "7");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_8_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "8");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_9_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "9");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}

void MainWindow::on_pushButton_0_clicked()
{
    QString currText = ui->lineEdit->text();
    ui->lineEdit->setText(currText + "0");
    ui->enterButton->setEnabled(true);
    ui->errorLabel->setText("");
}


void MainWindow::on_clearButton_clicked()
{
    ui->lineEdit->setText("");
    ui->enterButton->setEnabled(false);
}

void MainWindow::on_enterButton_clicked()
{
    if(currAcc == -1){
        QString input = ui->lineEdit->text();

        int accNum = stoi(input.toStdString());

        map<int, Card*> db = bank->getCards();

        auto it = db.find(accNum);

        if(it != db.end()){
            ui->label->setText("Enter Your 4 Digit PIN Number : \nPress \"Enter\" when done");
            currAcc = accNum;
            ui->lineEdit->setText("");
            ui->enterButton->setEnabled(false);
            ui->lineEdit->setEchoMode(QLineEdit::Password);

        }else{
            ui->lineEdit->setText("");
            ui->enterButton->setEnabled(false);
            ui->errorLabel->setText("Invalid Account Number");
        }
    }else{
        QString input = ui->lineEdit->text();

        int pin = stoi(input.toStdString());

        map<Card* , int> passwords = bank->getPasswords();
        map<int , Card*> cards = bank->getCards();

        if(passwords[cards[currAcc]] == pin){
            //open new window for withdraw deposit and check balance


            LoggedIn *loggedInUi = new LoggedIn(this,cards[currAcc]);
            loggedInUi->show();

            setEnabled(false);
            ui->label->setText("Enter Your 8 Digit Account Number : \nPress \"Enter\" when done");
            currAcc = -1;
            ui->lineEdit->setText("");
            ui->enterButton->setEnabled(false);
            ui->lineEdit->setEchoMode(QLineEdit::Normal);




        }else{
            ui->label->setText("Enter Your 8 Digit Account Number : \nPress \"Enter\" when done");
            currAcc = -1;
            ui->lineEdit->setText("");
            ui->enterButton->setEnabled(false);
            ui->errorLabel->setText("Invalid PIN");
            ui->lineEdit->setEchoMode(QLineEdit::Normal);
        }
    }


}

void MainWindow::on_exitButton_clicked()
{
    close();
}

