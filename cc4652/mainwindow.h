#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lde.h"
#include "no.h"


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



private slots:

    void on_cadastrarCliente_clicked();

    void on_consultarCliente_clicked();


private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
