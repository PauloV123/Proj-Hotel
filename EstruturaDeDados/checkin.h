#ifndef CHECKIN_H
#define CHECKIN_H

#include <QDialog>

namespace Ui {
class CheckIn;
}

class CheckIn : public QDialog
{
    Q_OBJECT

public:
    explicit CheckIn(QWidget *parent = nullptr);
    ~CheckIn();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CheckIn *ui;
};

#endif // CHECKIN_H
