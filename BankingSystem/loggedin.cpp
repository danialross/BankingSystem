#include "loggedin.h"
#include "ui_loggedin.h"
#include "balancewindow.h"
#include "withdraw.h"


LoggedIn::LoggedIn(QMainWindow *before,Card *card,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoggedIn)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->before = before;
    this->currCard = card;

}

LoggedIn::~LoggedIn()
{
    delete ui;
}

void LoggedIn::setBefore(QMainWindow *newBefore)
{
    before = newBefore;
}



void LoggedIn::on_balanceButton_clicked()
{
    QString balance = QString::number(currCard->getBalance());
    BalanceWindow *balanceWindow = new BalanceWindow(this,balance);
    balanceWindow->show();
    setEnabled(false);
}

void LoggedIn::setCurrCard(Card *newCurrCard)
{
    currCard = newCurrCard;
}


void LoggedIn::on_exitButton_clicked()
{
    close();
    before->close();
}


void LoggedIn::on_withdrawButton_clicked()
{
    Withdraw *withdrawWindow = new Withdraw(currCard,this);
    withdrawWindow->show();
    setEnabled(false);
}

