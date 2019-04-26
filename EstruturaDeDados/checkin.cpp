#include "checkin.h"
#include "ui_checkin.h"
#include "ldde.h"
#include <QMessageBox>
CheckIn::CheckIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckIn)
{
    ui->setupUi(this);
    setWindowTitle("CheckIn");
}

CheckIn::~CheckIn()
{
    delete ui;
}

void CheckIn::on_pushButton_2_clicked()
{
    //LDDE
    ldde<int> L;

    L.insereLDDE(ui->CKRG->value());
    QMessageBox::information(this,"title","Check In concluido!");
}
