#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gerenciarclientes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btCadastrar_clicked()
{
    GerenciarClientes gc;
    gc.exec();
}
