#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>

namespace Ui {
class CheckOut;
}

class CheckOut : public QDialog
{
    Q_OBJECT

public:
    explicit CheckOut(QWidget *parent = nullptr);
    ~CheckOut();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CheckOut *ui;
};

#endif // CHECKOUT_H
