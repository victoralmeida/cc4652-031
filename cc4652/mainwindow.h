#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lde.h"
#include "no.h"
#include "ldde.h"
#include "no-ldde.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Lde listaCliente;
    Ldde listaReserva;



private slots:

    void on_cadastrarCliente_clicked();

    void on_consultarCliente_clicked();


    void on_deletarCliente_clicked();

    void on_gerenciarReservas_clicked();

    void on_gerenciarClientes_clicked();

    void on_reservar_clicked();



    void on_consultarReserva_clicked();

    void on_gerenciarReservas_2_clicked();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
