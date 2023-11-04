/********************************************************************************
** Form generated from reading UI file 'cadastrar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRAR_H
#define UI_CADASTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastrar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *usuario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *senha;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *senhaconfirma;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cadastrarusuario;
    QPushButton *cancelar;

    void setupUi(QDialog *cadastrar)
    {
        if (cadastrar->objectName().isEmpty())
            cadastrar->setObjectName("cadastrar");
        cadastrar->resize(474, 271);
        cadastrar->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));\n"
"font-family: 'Courier New';\n"
"color: #FFF"));
        layoutWidget = new QWidget(cadastrar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 431, 211));
        layoutWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #d1105a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout->addWidget(label);

        usuario = new QLineEdit(layoutWidget);
        usuario->setObjectName("usuario");
        usuario->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"border: 1px solid #FFF;\n"
"color:#000"));

        horizontalLayout->addWidget(usuario);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #ff930a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_2->addWidget(label_2);

        senha = new QLineEdit(layoutWidget);
        senha->setObjectName("senha");
        senha->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"border: 1px solid #FFF;\n"
"color:#000"));
        senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #f24b04;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_3->addWidget(label_3);

        senhaconfirma = new QLineEdit(layoutWidget);
        senhaconfirma->setObjectName("senhaconfirma");
        senhaconfirma->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"border: 1px solid #FFF;\n"
"color:#000"));
        senhaconfirma->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(senhaconfirma);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        cadastrarusuario = new QPushButton(layoutWidget);
        cadastrarusuario->setObjectName("cadastrarusuario");
        cadastrarusuario->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #884ab2;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_4->addWidget(cadastrarusuario);

        cancelar = new QPushButton(layoutWidget);
        cancelar->setObjectName("cancelar");
        cancelar->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #884ab2;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_4->addWidget(cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(cadastrar);

        QMetaObject::connectSlotsByName(cadastrar);
    } // setupUi

    void retranslateUi(QDialog *cadastrar)
    {
        cadastrar->setWindowTitle(QCoreApplication::translate("cadastrar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cadastrar", "Usu\303\241rio", nullptr));
        usuario->setPlaceholderText(QCoreApplication::translate("cadastrar", "Digite o nome de usu\303\241rio desejado", nullptr));
        label_2->setText(QCoreApplication::translate("cadastrar", "Senha", nullptr));
        senha->setPlaceholderText(QCoreApplication::translate("cadastrar", "Crie uma senha", nullptr));
        label_3->setText(QCoreApplication::translate("cadastrar", "Confirmar senha", nullptr));
        senhaconfirma->setPlaceholderText(QCoreApplication::translate("cadastrar", "Repita a senha anterior", nullptr));
        cadastrarusuario->setText(QCoreApplication::translate("cadastrar", "Cadastrar", nullptr));
        cancelar->setText(QCoreApplication::translate("cadastrar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastrar: public Ui_cadastrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRAR_H
