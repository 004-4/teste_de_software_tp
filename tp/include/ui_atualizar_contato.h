/********************************************************************************
** Form generated from reading UI file 'atualizar_contato.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATUALIZAR_CONTATO_H
#define UI_ATUALIZAR_CONTATO_H

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

class Ui_atualizar_contato
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *celular;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *email;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *categoria;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *atualizar;
    QPushButton *cancelar;

    void setupUi(QDialog *atualizar_contato)
    {
        if (atualizar_contato->objectName().isEmpty())
            atualizar_contato->setObjectName("atualizar_contato");
        atualizar_contato->resize(509, 279);
        atualizar_contato->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));"));
        layoutWidget_2 = new QWidget(atualizar_contato);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 40, 431, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #FF930A;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_2->addWidget(label_2);

        nome = new QLineEdit(layoutWidget_2);
        nome->setObjectName("nome");
        nome->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_2->addWidget(nome);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #F24B04;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_3->addWidget(label_3);

        celular = new QLineEdit(layoutWidget_2);
        celular->setObjectName("celular");
        celular->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_3->addWidget(celular);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color:#d1105a;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_4->addWidget(label_4);

        email = new QLineEdit(layoutWidget_2);
        email->setObjectName("email");
        email->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_4->addWidget(email);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #411ca8;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_5->addWidget(label_5);

        categoria = new QLineEdit(layoutWidget_2);
        categoria->setObjectName("categoria");
        categoria->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_5->addWidget(categoria);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        atualizar = new QPushButton(layoutWidget_2);
        atualizar->setObjectName("atualizar");
        atualizar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_6->addWidget(atualizar);

        cancelar = new QPushButton(layoutWidget_2);
        cancelar->setObjectName("cancelar");
        cancelar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_6->addWidget(cancelar);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(atualizar_contato);

        QMetaObject::connectSlotsByName(atualizar_contato);
    } // setupUi

    void retranslateUi(QDialog *atualizar_contato)
    {
        atualizar_contato->setWindowTitle(QCoreApplication::translate("atualizar_contato", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("atualizar_contato", "Nome", nullptr));
        nome->setText(QString());
        nome->setPlaceholderText(QCoreApplication::translate("atualizar_contato", "Digite o nome do contato", nullptr));
        label_3->setText(QCoreApplication::translate("atualizar_contato", "Celular", nullptr));
        celular->setText(QString());
        celular->setPlaceholderText(QCoreApplication::translate("atualizar_contato", "Digite o celular/telefone do contato", nullptr));
        label_4->setText(QCoreApplication::translate("atualizar_contato", "E-mail", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("atualizar_contato", "Digite o e-mail do contato", nullptr));
        label_5->setText(QCoreApplication::translate("atualizar_contato", "Categoria", nullptr));
        categoria->setText(QString());
        categoria->setPlaceholderText(QCoreApplication::translate("atualizar_contato", "Defina o grupo ao qual esse contato pertence", nullptr));
        atualizar->setText(QCoreApplication::translate("atualizar_contato", "Atualizar", nullptr));
        cancelar->setText(QCoreApplication::translate("atualizar_contato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atualizar_contato: public Ui_atualizar_contato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZAR_CONTATO_H
