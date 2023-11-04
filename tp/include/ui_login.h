/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *usuario;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *senha;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *logintoprin;
    QPushButton *cadastrar;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(473, 185);
        login->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0.988636, x2:0, y2:0.028, stop:0 rgba(242, 75, 4, 255), stop:0.477273 rgba(71, 28, 168, 255), stop:0.681818 rgba(136, 74, 184, 255), stop:0.971591 rgba(209, 16, 90, 255));\n"
"font-family: 'Courier New';\n"
"color: #FFF"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 411, 101));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("/* Ellipse 1 */\n"
"\n"
"box-sizing: border-box;\n"
"\n"
"background:  #d1105a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"\n"
"\n"
"/* Agenda */\n"
"\n"
"position: absolute;\n"
"width: 236px;\n"
"height: 64px;\n"
"left: 384px;\n"
"top: 130px;\n"
"\n"
"font-family: 'Courier New';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 20px;\n"
"line-height: 56px;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
"\n"
"/* Drop Shadow */\n"
"text-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"box-background-color: #FFF;"));

        horizontalLayout_5->addWidget(label_2);

        usuario = new QLineEdit(layoutWidget);
        usuario->setObjectName("usuario");
        usuario->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"border: 1px solid #FFF;\n"
"color:#000"));
        usuario->setCursorPosition(0);
        usuario->setDragEnabled(false);

        horizontalLayout_5->addWidget(usuario);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("/* Ellipse 1 */\n"
"\n"
"box-sizing: border-box;\n"
"\n"
"background: #ff930a;\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"\n"
"\n"
"/* Agenda */\n"
"\n"
"position: absolute;\n"
"width: 236px;\n"
"height: 64px;\n"
"left: 384px;\n"
"top: 130px;\n"
"\n"
"font-family: 'Courier New';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 20px;\n"
"line-height: 56px;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
"\n"
"/* Drop Shadow */\n"
"text-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_3->addWidget(label_4);

        senha = new QLineEdit(layoutWidget);
        senha->setObjectName("senha");
        senha->setStyleSheet(QString::fromUtf8("background-color: #FFF;\n"
"border: 1px solid #FFF;\n"
"color: #000;\n"
"echo-mode: 'Password*';"));
        senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(senha);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logintoprin = new QPushButton(layoutWidget);
        logintoprin->setObjectName("logintoprin");
        logintoprin->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_2->addWidget(logintoprin);

        cadastrar = new QPushButton(layoutWidget);
        cadastrar->setObjectName("cadastrar");
        cadastrar->setStyleSheet(QString::fromUtf8("background-color: #884ab2;\n"
"size: 17pt;\n"
"color: #FFFFFF;\n"
"font-family: 'Courier New';\n"
"box-shadow: inset 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
""));

        horizontalLayout_2->addWidget(cadastrar);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 473, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Usu\303\241rio", nullptr));
        usuario->setText(QString());
        usuario->setPlaceholderText(QCoreApplication::translate("login", "Digite seu nome de usu\303\241rio", nullptr));
        label_4->setText(QCoreApplication::translate("login", "Senha", nullptr));
        senha->setText(QString());
        senha->setPlaceholderText(QCoreApplication::translate("login", "Digite sua senha", nullptr));
        logintoprin->setText(QCoreApplication::translate("login", "Login", nullptr));
        cadastrar->setText(QCoreApplication::translate("login", "Cadastrar", nullptr));
        menu->setTitle(QCoreApplication::translate("login", ":)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
