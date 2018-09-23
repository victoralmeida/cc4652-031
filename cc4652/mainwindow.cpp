#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "lde.h"
#include "no.h"


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




void MainWindow::on_pushButton_clicked()
{
    QString nome = ui->nome->text();
    QString cpf = ui->cpf->text();
    QString telefone = ui->telefone->text();
    int dia = ui->dia->text().toInt();
    int mes = ui->mes->text().toInt();
    int ano = ui->ano->text().toInt();

    if(listaCliente.insere(nome, cpf, telefone, dia, mes, ano)){
       QMessageBox::information(this, "Status", "Cadastrado com sucesso");
    }
    else{
       QMessageBox::information(this, "Status", "Não foi possível cadastrar o cliente");
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    int cpf = ui->buscar->text().toInt();
    No *respostaBusca = listaCliente.busca(cpf);

    QString nomeBuscado = respostaBusca->getNome();
    QMessageBox::information(this, "Status", nomeBuscado);
}
