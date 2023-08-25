#ifndef LOGGEDIN_H
#define LOGGEDIN_H

#include <QMainWindow>
#include "ui_mainwindow.h"

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

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoggedIn *ui;
    QMainWindow *before;
};

#endif // LOGGEDIN_H
