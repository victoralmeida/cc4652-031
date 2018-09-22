#include "cadastrarcliente.h"
#include "ui_cadastrarcliente.h"

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
