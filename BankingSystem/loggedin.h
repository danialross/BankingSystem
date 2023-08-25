#ifndef LOGGEDIN_H
#define LOGGEDIN_H

#include <QMainWindow>
#include "Card.h"

namespace Ui {
class LoggedIn;
}

class LoggedIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoggedIn(QWidget *parent = nullptr);
    ~LoggedIn();

    void setBefore(QMainWindow *newBefore);

    void setCurrCard(Card *newCurrCard);

private slots:
    void on_balanceButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::LoggedIn *ui;
    QMainWindow *before;
    Card* currCard;
};

#endif // LOGGEDIN_H
