#include "gerenciarclientes.h"
#include "ui_gerenciarclientes.h"
#include "cadastrarcliente.h"

GerenciarClientes::GerenciarClientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GerenciarClientes)
{
    ui->setupUi(this);
}

GerenciarClientes::~GerenciarClientes()
{
    delete ui;
}

void GerenciarClientes::on_pushButton_clicked()
{
    CadastrarCliente cc;
    cc.exec();
}
