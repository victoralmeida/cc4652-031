#ifndef GERENCIARCLIENTES_H
#define GERENCIARCLIENTES_H

#include <QDialog>


namespace Ui {
class GerenciarClientes;
}

class GerenciarClientes : public QDialog
{
    Q_OBJECT

public:
    explicit GerenciarClientes(QWidget *parent = 0);
    ~GerenciarClientes();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GerenciarClientes *ui;
};

#endif // GERENCIARCLIENTES_H
