#ifndef FAXINEIRA_H
#define FAXINEIRA_H

#include <QDialog>

namespace Ui {
class Faxineira;
}

class Faxineira : public QDialog
{
    Q_OBJECT

public:
    explicit Faxineira(QWidget *parent = nullptr);
    ~Faxineira();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Faxineira *ui;
};

#endif // FAXINEIRA_H
