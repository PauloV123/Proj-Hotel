#ifndef CADASTRO_H
#define CADASTRO_H
#include "filacircular.h"
#include <QDialog>

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_SairCadastro_clicked();

    void on_FilaCirc_clicked();

private:
    Ui::Cadastro *ui;

};

#endif // CADASTRO_H
