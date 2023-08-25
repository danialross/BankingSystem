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

void LoggedIn::on_pushButton_clicked()
{
    before->setEnabled(true);
    close();

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

