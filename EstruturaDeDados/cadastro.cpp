#include "cadastro.h"
#include "ui_cadastro.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <filacircular.h>


QString local = "C:/Users/paulo/Documents/EstruturaDeDados/Cadastrados/";
QString nome = "Cadastrados.txt";

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    ui->SairCadastro->setText("Close");
    setWindowTitle("Register");
    ui->resultado->setText("");
}

Cadastro::~Cadastro()
{
    delete ui;
}

/*void Cadastro::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    QMessageBox::information(this, "..",file_name);
}*/

void Cadastro::on_pushButton_2_clicked()
{
    QFile file(local + nome);
    if (!file.open(QFile::Append | QFile::Text)){
        QMessageBox::warning(this, "title", "File not open");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    ui->plainTextEdit->moveCursor(QTextCursor::Down);
    file.flush();
    file.close();
    ui->plainTextEdit->clear();
}

void Cadastro::on_pushButton_3_clicked()
{
    QFile file(local + nome);
    if (!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "File not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.flush();
    file.close();
}

void Cadastro::on_SairCadastro_clicked()
{

}

void Cadastro::on_FilaCirc_clicked()
{

    FilaCirc f;
    ui->resultado->setText(QString::number(ui->RG->value()));
    f.enfileira(ui->RG->value());
    QMessageBox::information(this,"title","Cadastro concluido!");

}
