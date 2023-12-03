#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    QSqlDatabase BD = QSqlDatabase::addDatabase("QSQLITE");
    BD.setDatabaseName("tp/data/agendadecontatos");
        if (!BD.open()){
        QMessageBox::warning(this, "Banco de Dados não foi aberto, favor reabrir o aplicativo", ":(");
            close();
    }
}

login::~login()
{
    delete ui;
}

void login::on_logintoprin_clicked()
{
    QString user = ui->usuario->text();
    QString password = ui->senha->text();

    if (user == "claraboia"){
        if (password == "bolinho86"){
            pagina_principal P;
            P.passa_usuario(user);
            P.passa_senha(password);
            P.exec();
            close();

        }
        else{
            QMessageBox::warning(this, "Login", "Senha incorreta :(", "Okay!");
        }
    }
    else{
        QMessageBox::warning(this, "Login", "Usuário ou senha incorretos :/", "Okay!");
    }
}


void login::on_cadastrar_clicked()
{
    cadastrar C;
    C.exec();
}
