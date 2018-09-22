/********************************************************************************
** Form generated from reading UI file 'gerenciarclientes.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENCIARCLIENTES_H
#define UI_GERENCIARCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GerenciarClientes
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *GerenciarClientes)
    {
        if (GerenciarClientes->objectName().isEmpty())
            GerenciarClientes->setObjectName(QStringLiteral("GerenciarClientes"));
        GerenciarClientes->resize(400, 300);
        pushButton = new QPushButton(GerenciarClientes);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 130, 89, 25));
        label = new QLabel(GerenciarClientes);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 131, 61));

        retranslateUi(GerenciarClientes);

        QMetaObject::connectSlotsByName(GerenciarClientes);
    } // setupUi

    void retranslateUi(QDialog *GerenciarClientes)
    {
        GerenciarClientes->setWindowTitle(QApplication::translate("GerenciarClientes", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("GerenciarClientes", "Cadastrar", nullptr));
        label->setText(QApplication::translate("GerenciarClientes", "Gerenciar Clientes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GerenciarClientes: public Ui_GerenciarClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENCIARCLIENTES_H
