/********************************************************************************
** Form generated from reading UI file 'pesquisar_na_agenda.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISAR_NA_AGENDA_H
#define UI_PESQUISAR_NA_AGENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pesquisar_na_agenda
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *barradepesquisa;
    QPushButton *pesquisar;
    QPushButton *limparbusca;
    QTableWidget *agendacontatos;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *atualizarcontato;
    QPushButton *excluircontato;
    QPushButton *voltar;

    void setupUi(QDialog *pesquisar_na_agenda)
    {
        if (pesquisar_na_agenda->objectName().isEmpty())
            pesquisar_na_agenda->setObjectName("pesquisar_na_agenda");
        pesquisar_na_agenda->resize(938, 518);
        pesquisar_na_agenda->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.437, y1:0.556818, x2:1, y2:1, stop:0.147727 rgba(255, 143, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(pesquisar_na_agenda);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 891, 481));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 7, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: #FF930A;\n"
"size: 20pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';"));

        horizontalLayout_3->addWidget(label);

        barradepesquisa = new QLineEdit(layoutWidget);
        barradepesquisa->setObjectName("barradepesquisa");
        barradepesquisa->setStyleSheet(QString::fromUtf8("background-color: #FFF solid"));

        horizontalLayout_3->addWidget(barradepesquisa);

        pesquisar = new QPushButton(layoutWidget);
        pesquisar->setObjectName("pesquisar");
        pesquisar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_3->addWidget(pesquisar);

        limparbusca = new QPushButton(layoutWidget);
        limparbusca->setObjectName("limparbusca");
        limparbusca->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_3->addWidget(limparbusca);


        verticalLayout->addLayout(horizontalLayout_3);

        agendacontatos = new QTableWidget(layoutWidget);
        agendacontatos->setObjectName("agendacontatos");
        agendacontatos->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(agendacontatos);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        atualizarcontato = new QPushButton(layoutWidget);
        atualizarcontato->setObjectName("atualizarcontato");
        atualizarcontato->setStyleSheet(QString::fromUtf8("background: #471ca8;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;"));

        horizontalLayout_2->addWidget(atualizarcontato);

        excluircontato = new QPushButton(layoutWidget);
        excluircontato->setObjectName("excluircontato");
        excluircontato->setStyleSheet(QString::fromUtf8("background: #d1105a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;"));

        horizontalLayout_2->addWidget(excluircontato);

        voltar = new QPushButton(layoutWidget);
        voltar->setObjectName("voltar");
        voltar->setStyleSheet(QString::fromUtf8("background: #d1105a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"font-family: 'Courier New';\n"
"color: #FFF;\n"
"font-size: 18pt;"));

        horizontalLayout_2->addWidget(voltar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(pesquisar_na_agenda);

        QMetaObject::connectSlotsByName(pesquisar_na_agenda);
    } // setupUi

    void retranslateUi(QDialog *pesquisar_na_agenda)
    {
        pesquisar_na_agenda->setWindowTitle(QCoreApplication::translate("pesquisar_na_agenda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pesquisar_na_agenda", "Pesquisar Nome:", nullptr));
        barradepesquisa->setPlaceholderText(QCoreApplication::translate("pesquisar_na_agenda", "Digite um nome, um celular, um e-mail ou uma categoria...", nullptr));
        pesquisar->setText(QCoreApplication::translate("pesquisar_na_agenda", "Pesquisar", nullptr));
        limparbusca->setText(QCoreApplication::translate("pesquisar_na_agenda", "Limpar busca", nullptr));
        atualizarcontato->setText(QCoreApplication::translate("pesquisar_na_agenda", "Atualizar contato", nullptr));
        excluircontato->setText(QCoreApplication::translate("pesquisar_na_agenda", "Excluir contato", nullptr));
        voltar->setText(QCoreApplication::translate("pesquisar_na_agenda", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pesquisar_na_agenda: public Ui_pesquisar_na_agenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISAR_NA_AGENDA_H
