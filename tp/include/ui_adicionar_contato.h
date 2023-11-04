/********************************************************************************
** Form generated from reading UI file 'adicionar_contato.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONAR_CONTATO_H
#define UI_ADICIONAR_CONTATO_H

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

class Ui_adicionar_contato
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *celular;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *email;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *categoria;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *adicionar;
    QPushButton *cancelar;

    void setupUi(QDialog *adicionar_contato)
    {
        if (adicionar_contato->objectName().isEmpty())
            adicionar_contato->setObjectName("adicionar_contato");
        adicionar_contato->resize(511, 274);
        adicionar_contato->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));"));
        layoutWidget = new QWidget(adicionar_contato);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 40, 431, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #FF930A;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout->addWidget(label);

        nome = new QLineEdit(layoutWidget);
        nome->setObjectName("nome");
        nome->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout->addWidget(nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #F24B04;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_2->addWidget(label_2);

        celular = new QLineEdit(layoutWidget);
        celular->setObjectName("celular");
        celular->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_2->addWidget(celular);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color:#d1105a;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_3->addWidget(label_3);

        email = new QLineEdit(layoutWidget);
        email->setObjectName("email");
        email->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_3->addWidget(email);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("size: 15pt;\n"
"background-color: #411ca8;\n"
"color: #FFFFFF;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);"));

        horizontalLayout_5->addWidget(label_4);

        categoria = new QLineEdit(layoutWidget);
        categoria->setObjectName("categoria");
        categoria->setStyleSheet(QString::fromUtf8("background-color: #FFF"));

        horizontalLayout_5->addWidget(categoria);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        adicionar = new QPushButton(layoutWidget);
        adicionar->setObjectName("adicionar");
        adicionar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_4->addWidget(adicionar);

        cancelar = new QPushButton(layoutWidget);
        cancelar->setObjectName("cancelar");
        cancelar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_4->addWidget(cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(adicionar_contato);

        QMetaObject::connectSlotsByName(adicionar_contato);
    } // setupUi

    void retranslateUi(QDialog *adicionar_contato)
    {
        adicionar_contato->setWindowTitle(QCoreApplication::translate("adicionar_contato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adicionar_contato", "Nome", nullptr));
        nome->setText(QString());
        nome->setPlaceholderText(QCoreApplication::translate("adicionar_contato", "Digite o nome do contato", nullptr));
        label_2->setText(QCoreApplication::translate("adicionar_contato", "Celular", nullptr));
        celular->setText(QString());
        celular->setPlaceholderText(QCoreApplication::translate("adicionar_contato", "Digite o celular/telefone do contato", nullptr));
        label_3->setText(QCoreApplication::translate("adicionar_contato", "E-mail", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("adicionar_contato", "Digite o e-mail do contato", nullptr));
        label_4->setText(QCoreApplication::translate("adicionar_contato", "Categoria", nullptr));
        categoria->setText(QString());
        categoria->setPlaceholderText(QCoreApplication::translate("adicionar_contato", "Defina o grupo ao qual esse contato pertence", nullptr));
        adicionar->setText(QCoreApplication::translate("adicionar_contato", "Adicionar", nullptr));
        cancelar->setText(QCoreApplication::translate("adicionar_contato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adicionar_contato: public Ui_adicionar_contato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAR_CONTATO_H
