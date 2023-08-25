#ifndef BALANCEWINDOW_H
#define BALANCEWINDOW_H

#include <QMainWindow>

namespace Ui {
class BalanceWindow;
}

class BalanceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BalanceWindow(QMainWindow *before,const QString &str = QString(),QWidget *parent = nullptr);
    ~BalanceWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BalanceWindow *ui;
    QMainWindow *before;
};

#endif // BALANCEWINDOW_H
