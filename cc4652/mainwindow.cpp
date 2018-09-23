#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "lde.h"
#include "no.h"

using namespace std;


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




void MainWindow::on_cadastrarCliente_clicked()
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

    ui->nome->clear();
    ui->cpf->clear();
    ui->telefone->clear();
    ui->dia->clear();
    ui->mes->clear();
    ui->ano->clear();

}



void MainWindow::on_consultarCliente_clicked()
{
    QString cpf = ui->buscar->text();
    No *respostaBusca = listaCliente.busca(cpf);

    QString nome = respostaBusca->getNome();
    QString cpfBuscado = respostaBusca->getCPF();
    QString telefone = respostaBusca->getTelefone();

    QString dia = QString::number(respostaBusca->getDia());
    QString mes = QString::number(respostaBusca->getMes());
    QString ano = QString::number(respostaBusca->getAno());

    ui->nomeConsulta->setText(nome);
    ui->cfpConsulta->setText(cpfBuscado);
    ui->telefoneConsulta->setText(telefone);
    ui->diaConsulta->setText(dia);
    ui->mesConsulta->setText(mes);
    ui->anoConsulta->setText(ano);


}


void MainWindow::on_deletarCliente_clicked()
{
    QString cliente = ui->deletar->text();
    if(listaCliente.remove(cliente))
        QMessageBox::information(this, "Status", "Deletado com sucesso");
    else
        QMessageBox::information(this, "Status", "Não foi possível deletar o cliente");
}
