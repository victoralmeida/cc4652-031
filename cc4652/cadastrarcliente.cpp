#include "cadastrarcliente.h"
#include "ui_cadastrarcliente.h"
#include "lde.h"
#include "no.h"



CadastrarCliente::CadastrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastrarCliente)
{
    ui->setupUi(this);
}

CadastrarCliente::~CadastrarCliente()
{
    delete ui;
}

void CadastrarCliente::on_pushButton_3_clicked()
{
    QString nome = ui->nome->text();
    QString cpf = ui->cpf->text();
    QString telefone = ui->telefone->text();
    int dia = ui->dia->text().toInt();
    int mes = ui->mes->text().toInt();
    int ano = ui->ano->text().toInt();

    Lde listaCliente;

    if(listaCliente.insere(nome, cpf, telefone, dia, mes, ano))
       QMessageBox::information(this, "Status", "Cadastrado com sucesso");
    else
       QMessageBox::information(this, "Status", "Não foi possível cadastrar o cliente");

}
