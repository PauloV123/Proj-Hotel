#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastro.h"
#include "checkin.h"
#include "checkout.h"
#include "faxineira.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Hotel");
    ui->Sair->setText("Close");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Cadastro_clicked()
{
    Cadastro cadastro;
    cadastro.setModal(true);
    cadastro.exec();
}

void MainWindow::on_CheckIn_clicked()
{
    CheckIn checkin;
    checkin.setModal(true);
    checkin.exec();
}

void MainWindow::on_pushButton_clicked()
{
    CheckOut checkout;
    checkout.setModal(true);
    checkout.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Faxineira faxineira;
    faxineira.setModal(true);
    faxineira.exec();
}

void MainWindow::on_Sair_clicked()
{
    QMessageBox::information(this,"title","Valeu pelo acesso!");
}
