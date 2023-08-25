#include "loggedin.h"
#include "ui_loggedin.h"
#include "balancewindow.h"

LoggedIn::LoggedIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoggedIn)
{
    ui->setupUi(this);

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
    BalanceWindow *balanceWindow = new BalanceWindow(balance);
    balanceWindow->show();
    balanceWindow->setBefore(this);
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

