#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QMainWindow>
#include "Card.h"

namespace Ui {
class Withdraw;
}

class Withdraw : public QMainWindow
{
    Q_OBJECT

public:
    explicit Withdraw(Card* card,QMainWindow* before, QWidget *parent = nullptr);
    ~Withdraw();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_clearButton_clicked();

    void on_enterButton_clicked();

    void on_exitButton_clicked();
private:
    Ui::Withdraw *ui;
    QMainWindow *before;
    Card *card;
};

#endif // WITHDRAW_H
