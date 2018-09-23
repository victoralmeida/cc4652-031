#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "info.h"

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

void MainWindow::on_reservar_clicked(){
    QString cpf = ui->cpfReserva->text();
    No* cliente = listaCliente.busca(cpf);

    QString diaCI = ui->dataCI->text();
    QString diaCO = ui->dataCO->text();
    QString hhCI = ui->hhCI->text();
    QString hhCO = ui->hhCO->text();

    if(cliente->getAno()==0)
        QMessageBox::information(this, "Status", "Cliente não encontrado");
    else{
        if(listaReserva.insere(cliente, diaCI, hhCI, diaCO, hhCO))
            QMessageBox::information(this, "Status", "Reserva cadastrada com sucesso");
        else
            QMessageBox::information(this, "Status", "Erro");
    }

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

void MainWindow::on_gerenciarReservas_clicked()
{
    //Esconde tudo referente à Gerenciar Clientes
    ui->nome->setVisible(false);
    ui->telefone->setVisible(false);
    ui->cpf->setVisible(false);
    ui->dia->setVisible(false);
    ui->mes->setVisible(false);
    ui->ano->setVisible(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->cadastrarCliente->setVisible(false);
    ui->buscar->setVisible(false);
    ui->consultarCliente->setVisible(false);
    ui->deletar->setVisible(false);
    ui->deletarCliente->setVisible(false);
    ui->nomeConsulta->setVisible(false);
    ui->telefoneConsulta->setVisible(false);
    ui->cfpConsulta->setVisible(false);
    ui->anoConsulta->setVisible(false);
    ui->diaConsulta->setVisible(false);
    ui->mesConsulta->setVisible(false);
   // ui->line->setVisible(false);
    ui->line_2->setVisible(false);
    ui->line_3->setVisible(false);

    //Exibe tudo referente a Gerenciar Reservas
    ui->cpfClienteLabel->setVisible(true);
    ui->cpfReserva->setVisible(true);
    ui->reservar->setVisible(true);
    ui->dataCILabel->setVisible(true);
    ui->dataCI->setVisible(true);
    ui->hhCI->setVisible(true);
    ui->dataCOLabel->setVisible(true);
    ui->dataCO->setVisible(true);
    ui->hhCO->setVisible(true);
    ui->line_4->setVisible(true);
    ui->cpfConsultaReservaLabel->setVisible(true);
    ui->cpfConsultarReserva->setVisible(true);
    ui->consultarReserva->setVisible(true);

}

void MainWindow::on_gerenciarClientes_clicked()
{
    //Exibe tudo referente a Gerenciar Clientes
    ui->nome->setVisible(true);
    ui->telefone->setVisible(true);
    ui->cpf->setVisible(true);
    ui->dia->setVisible(true);
    ui->mes->setVisible(true);
    ui->ano->setVisible(true);
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(true);
    ui->cadastrarCliente->setVisible(true);
    ui->buscar->setVisible(true);
    ui->consultarCliente->setVisible(true);
    ui->deletar->setVisible(true);
    ui->deletarCliente->setVisible(true);
    ui->nomeConsulta->setVisible(true);
    ui->telefoneConsulta->setVisible(true);
    ui->cfpConsulta->setVisible(true);
    ui->anoConsulta->setVisible(true);
    ui->diaConsulta->setVisible(true);
    ui->mesConsulta->setVisible(true);
   // ui->line->setVisible(true);
    ui->line_2->setVisible(true);
    ui->line_3->setVisible(true);


    //Esconde tudo referente à Gerenciar Reservas
    ui->cpfClienteLabel->setVisible(false);
    ui->cpfReserva->setVisible(false);
    ui->reservar->setVisible(false);
    ui->dataCILabel->setVisible(false);
    ui->dataCI->setVisible(false);
    ui->hhCI->setVisible(false);
    ui->dataCOLabel->setVisible(false);
    ui->dataCO->setVisible(false);
    ui->hhCO->setVisible(false);
    ui->line_4->setVisible(false);
    ui->cpfConsultaReservaLabel->setVisible(false);
    ui->cpfConsultarReserva->setVisible(false);
    ui->consultarReserva->setVisible(false);


}

void MainWindow::on_consultarReserva_clicked()
{
    QString cpf = ui->cpfConsultarReserva->text();
    NoLdde respostaBusca = listaReserva.buscar(cpf);

    QString clienteNome = respostaBusca.getClienteNome();
    QMessageBox::information(this, "Status", clienteNome);

}

void MainWindow::on_gerenciarReservas_2_clicked()
{
    info i;
    i.exec();
}
