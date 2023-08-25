#include "balancewindow.h"
#include "ui_balancewindow.h"

BalanceWindow::BalanceWindow(const QString &str,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BalanceWindow)

{
    ui->setupUi(this);
    ui->textBrowser->setAlignment(Qt::AlignCenter);
    ui->textBrowser->insertPlainText("\n\nCurrent Balance:\n\n$"+str);

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
    before->setEnabled(true);
    close();
}
