#include "checkout.h"
#include "ui_checkout.h"
#include "ldde.h"
#include "lde.h"
#include "filacircular.h"
#include <QMessageBox>
CheckOut::CheckOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckOut)
{
    ui->setupUi(this);
    setWindowTitle("CheckOut");
}

CheckOut::~CheckOut()
{
    delete ui;
}

void CheckOut::on_pushButton_2_clicked()
{
    //LDE
    ldde<int> L;
    LDE<int> LL;
    FilaCirc f;

    LL.Remove(ui->CKORG->value());
    L.removeLDDE(ui->CKORG->value());
    f.desenfileira(ui->CKORG->value());

    QMessageBox::information(this,"title","Check Out concluido!");
}
