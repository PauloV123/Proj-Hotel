#include "checkin.h"
#include "ui_checkin.h"
#include "ldde.h"
#include <QMessageBox>
#include "lde.h"
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
    LDE<int> LL;
    LL.insere(ui->CKRG->value());
    L.insereLDDE(ui->CKRG->value());
    QMessageBox::information(this,"title","Check In concluido!");
}
