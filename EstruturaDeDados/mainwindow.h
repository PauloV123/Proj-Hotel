#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Cadastro_clicked();

    void on_CheckIn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Sair_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
