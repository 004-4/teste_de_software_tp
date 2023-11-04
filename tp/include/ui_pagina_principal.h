/********************************************************************************
** Form generated from reading UI file 'pagina_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINA_PRINCIPAL_H
#define UI_PAGINA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pagina_principal
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *veragenda;
    QPushButton *verperfil;
    QPushButton *adicionarcontato;

    void setupUi(QDialog *pagina_principal)
    {
        if (pagina_principal->objectName().isEmpty())
            pagina_principal->setObjectName("pagina_principal");
        pagina_principal->resize(708, 286);
        pagina_principal->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));"));
        label = new QLabel(pagina_principal);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 521, 71));
        label->setStyleSheet(QString::fromUtf8("box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 20pt;\n"
"background-color: #ff930a"));
        label_2 = new QLabel(pagina_principal);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 120, 252, 20));
        label_2->setStyleSheet(QString::fromUtf8("box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 12pt;\n"
"background-color: #F24b04"));
        veragenda = new QPushButton(pagina_principal);
        veragenda->setObjectName("veragenda");
        veragenda->setGeometry(QRect(360, 160, 301, 31));
        veragenda->setStyleSheet(QString::fromUtf8("box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;\n"
"background-color: #884ab2"));
        verperfil = new QPushButton(pagina_principal);
        verperfil->setObjectName("verperfil");
        verperfil->setGeometry(QRect(50, 200, 302, 31));
        verperfil->setAutoFillBackground(false);
        verperfil->setStyleSheet(QString::fromUtf8("box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;\n"
"background-color: #884ab2;\n"
""));
        adicionarcontato = new QPushButton(pagina_principal);
        adicionarcontato->setObjectName("adicionarcontato");
        adicionarcontato->setGeometry(QRect(50, 160, 302, 31));
        adicionarcontato->setAutoFillBackground(false);
        adicionarcontato->setStyleSheet(QString::fromUtf8("box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;\n"
"background-color: #884ab2;\n"
""));

        retranslateUi(pagina_principal);

        QMetaObject::connectSlotsByName(pagina_principal);
    } // setupUi

    void retranslateUi(QDialog *pagina_principal)
    {
        pagina_principal->setWindowTitle(QCoreApplication::translate("pagina_principal", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pagina_principal", "Bem-vindo a sua agenda pessoal!", nullptr));
        label_2->setText(QCoreApplication::translate("pagina_principal", "O que gostaria de fazer?", nullptr));
        veragenda->setText(QCoreApplication::translate("pagina_principal", "Ver agenda", nullptr));
        verperfil->setText(QCoreApplication::translate("pagina_principal", "Ver perfil", nullptr));
        adicionarcontato->setText(QCoreApplication::translate("pagina_principal", "Adicionar contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagina_principal: public Ui_pagina_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINA_PRINCIPAL_H
