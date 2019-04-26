#include "faxineira.h"
#include "ui_faxineira.h"
#include "pilha.h"
#include <QMessageBox>
static int i = 0;
static int w = 0;
static int t = 0;
static int ff = 0;
Faxineira::Faxineira(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Faxineira)
{
    ui->setupUi(this);
}

Faxineira::~Faxineira()
{
    delete ui;
}

void Faxineira::on_pushButton_2_clicked()
{
    Pilha p;
    ff++;
    if(ff > 20){
        QMessageBox::information(this,"title","Os quartos ja estão limpos!");
    }
    if(w<10 && t == 0){
        i++;
        p.empilha(i);
        ui->FaxiVai->setText(QString::number(i));
        w++;
    }else{
        w = 8 + i;
        ui->FaxiVai->setText(QString::number(0));
        if(w > 0){
            p.desempilha(i);
            i--;
            ui->FaxiVem->setText(QString::number(i));
            if(i <= 0){
                i++;
                w=0;
            }

        }
        t = 1;
    }

}

void Faxineira::on_pushButton_clicked()
{
    w = 0;
    t = 0;
    i = 0;
    ff = 0;
}
