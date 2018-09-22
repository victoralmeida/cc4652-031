#ifndef CADASTRARCLIENTE_H
#define CADASTRARCLIENTE_H

#include <QDialog>

namespace Ui {
class CadastrarCliente;
}

class CadastrarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit CadastrarCliente(QWidget *parent = 0);
    ~CadastrarCliente();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::CadastrarCliente *ui;
};

#endif // CADASTRARCLIENTE_H
