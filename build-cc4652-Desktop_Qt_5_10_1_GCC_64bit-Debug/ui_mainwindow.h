/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btCadastrar;
    QPushButton *btGerenciar;
    QPushButton *btHist;
    QPushButton *btInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btCadastrar = new QPushButton(centralWidget);
        btCadastrar->setObjectName(QStringLiteral("btCadastrar"));
        btCadastrar->setGeometry(QRect(40, 40, 171, 51));
        btGerenciar = new QPushButton(centralWidget);
        btGerenciar->setObjectName(QStringLiteral("btGerenciar"));
        btGerenciar->setGeometry(QRect(220, 40, 171, 51));
        btHist = new QPushButton(centralWidget);
        btHist->setObjectName(QStringLiteral("btHist"));
        btHist->setGeometry(QRect(20, 310, 161, 25));
        btInfo = new QPushButton(centralWidget);
        btInfo->setObjectName(QStringLiteral("btInfo"));
        btInfo->setGeometry(QRect(20, 350, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btCadastrar->setText(QApplication::translate("MainWindow", "Gerenciar Clientes", nullptr));
        btGerenciar->setText(QApplication::translate("MainWindow", "Gerenciar Reservas", nullptr));
        btHist->setText(QApplication::translate("MainWindow", "Historico", nullptr));
        btInfo->setText(QApplication::translate("MainWindow", "Instru\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
