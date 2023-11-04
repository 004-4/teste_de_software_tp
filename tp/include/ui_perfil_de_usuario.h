/********************************************************************************
** Form generated from reading UI file 'perfil_de_usuario.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFIL_DE_USUARIO_H
#define UI_PERFIL_DE_USUARIO_H

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

class Ui_perfil_de_usuario
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *usuario;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *nomeagenda;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QLineEdit *senha_2;
    QPushButton *voltar;

    void setupUi(QDialog *perfil_de_usuario)
    {
        if (perfil_de_usuario->objectName().isEmpty())
            perfil_de_usuario->setObjectName("perfil_de_usuario");
        perfil_de_usuario->resize(485, 203);
        perfil_de_usuario->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));\n"
"font-family: 'Courier New';\n"
"color: #FFF"));
        layoutWidget_3 = new QWidget(perfil_de_usuario);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(40, 40, 401, 121));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #d1105a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_10->addWidget(label_8);

        usuario = new QLineEdit(layoutWidget_3);
        usuario->setObjectName("usuario");
        usuario->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"color: #000;"));
        usuario->setReadOnly(false);

        horizontalLayout_10->addWidget(usuario);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #ff930a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_11->addWidget(label_9);

        nomeagenda = new QLineEdit(layoutWidget_3);
        nomeagenda->setObjectName("nomeagenda");
        nomeagenda->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"color: #000;"));

        horizontalLayout_11->addWidget(nomeagenda);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label = new QLabel(layoutWidget_3);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #f24b04;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_12->addWidget(label);

        senha_2 = new QLineEdit(layoutWidget_3);
        senha_2->setObjectName("senha_2");
        senha_2->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"color: #000;"));
        senha_2->setEchoMode(QLineEdit::Normal);
        senha_2->setReadOnly(true);

        horizontalLayout_12->addWidget(senha_2);


        verticalLayout_6->addLayout(horizontalLayout_12);


        verticalLayout_5->addLayout(verticalLayout_6);

        voltar = new QPushButton(layoutWidget_3);
        voltar->setObjectName("voltar");
        voltar->setStyleSheet(QString::fromUtf8("box-sizing: border-box;\n"
"\n"
"background:  #884ab2;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        verticalLayout_5->addWidget(voltar);


        retranslateUi(perfil_de_usuario);

        QMetaObject::connectSlotsByName(perfil_de_usuario);
    } // setupUi

    void retranslateUi(QDialog *perfil_de_usuario)
    {
        perfil_de_usuario->setWindowTitle(QCoreApplication::translate("perfil_de_usuario", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("perfil_de_usuario", "Usu\303\241rio", nullptr));
        label_9->setText(QCoreApplication::translate("perfil_de_usuario", "Nome da agenda", nullptr));
        nomeagenda->setText(QCoreApplication::translate("perfil_de_usuario", "agenda", nullptr));
        label->setText(QCoreApplication::translate("perfil_de_usuario", "Senha", nullptr));
        voltar->setText(QCoreApplication::translate("perfil_de_usuario", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class perfil_de_usuario: public Ui_perfil_de_usuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFIL_DE_USUARIO_H
