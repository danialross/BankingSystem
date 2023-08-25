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
    explicit BalanceWindow(QWidget *parent = nullptr);
    ~BalanceWindow();

    void setBefore(QMainWindow *newBefore);
    void setText(QString &str);

private slots:
    void on_pushButton_clicked();

private:
    Ui::BalanceWindow *ui;
    QMainWindow *before;
};

#endif // BALANCEWINDOW_H
