/********************************************************************************
** Form generated from reading UI file 'cadastrarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARCLIENTE_H
#define UI_CADASTRARCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CadastrarCliente
{
public:
    QLabel *label;

    void setupUi(QDialog *CadastrarCliente)
    {
        if (CadastrarCliente->objectName().isEmpty())
            CadastrarCliente->setObjectName(QStringLiteral("CadastrarCliente"));
        CadastrarCliente->resize(400, 300);
        label = new QLabel(CadastrarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 40, 141, 41));

        retranslateUi(CadastrarCliente);

        QMetaObject::connectSlotsByName(CadastrarCliente);
    } // setupUi

    void retranslateUi(QDialog *CadastrarCliente)
    {
        CadastrarCliente->setWindowTitle(QApplication::translate("CadastrarCliente", "Dialog", nullptr));
        label->setText(QApplication::translate("CadastrarCliente", "Cadastrar Cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastrarCliente: public Ui_CadastrarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARCLIENTE_H
