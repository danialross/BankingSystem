#include "balancewindow.h"
#include "ui_balancewindow.h"

BalanceWindow::BalanceWindow(QMainWindow *before,const QString &str,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BalanceWindow)

{
    ui->setupUi(this);
    this->before = before;
    ui->textBrowser->setAlignment(Qt::AlignCenter);
    ui->textBrowser->insertPlainText("\n\nCurrent Balance:\n\n$"+str);

}

BalanceWindow::~BalanceWindow()
{
    delete ui;
}

void BalanceWindow::on_pushButton_clicked()
{
    before->setEnabled(true);
    close();
}
