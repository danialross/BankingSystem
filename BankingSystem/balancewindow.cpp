#include "balancewindow.h"
#include "ui_balancewindow.h"

BalanceWindow::BalanceWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BalanceWindow)
{
    ui->setupUi(this);
}

BalanceWindow::~BalanceWindow()
{
    delete ui;
}

void BalanceWindow::setBefore(QMainWindow *newBefore)
{
    before = newBefore;
}

void BalanceWindow::on_pushButton_clicked()
{

}

