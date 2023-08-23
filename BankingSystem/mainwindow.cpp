#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , bank(4)


{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("1");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("2");
}



void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("7");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("9");
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("0");
}


void MainWindow::on_clearButton_clicked()
{
    QString allText = ui->textBrowser->toPlainText();
    QStringList lines = allText.split('\n');

    if (!lines.isEmpty()) {
        lines.removeLast(); // Remove the last line
        ui->textBrowser->setPlainText(lines.join("\n"));
    } else {
        qDebug() << "No lines in the text browser.";
    }
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText(" \n");
}


void MainWindow::on_enterButton_clicked()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
    ui->textBrowser->insertPlainText("Entered");

}


void MainWindow::on_withdrawButton_clicked()
{

}


void MainWindow::on_depositButton_clicked()
{

}

void MainWindow::on_balanceButton_clicked()
{

}
