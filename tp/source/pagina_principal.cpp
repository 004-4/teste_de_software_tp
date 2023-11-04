#include "pagina_principal.h"
#include "ui_pagina_principal.h"

pagina_principal::pagina_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pagina_principal)
{
    ui->setupUi(this);
}

pagina_principal::~pagina_principal()
{
    delete ui;
}

void pagina_principal::on_adicionarcontato_clicked()
{
    adicionar_contato AC;
    AC.exec();
}


void pagina_principal::on_veragenda_clicked()
{
    pesquisar_na_agenda PA;
    PA.exec();
}


QString pagina_principal::passa_usuario(QString user){

    this->user = user;
    return user;
}

QString pagina_principal::passa_senha(QString password){

    this->password = password;
    return password;
}

void pagina_principal::on_verperfil_clicked(){
    perfil_de_usuario Perfil;
    Perfil.recebe_usuario(user);
    Perfil.recebe_senha(password);
    Perfil.exec();
}

