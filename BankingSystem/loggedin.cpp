#include "loggedin.h"
#include "ui_loggedin.h"
#include "ui_mainwindow.h"

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


