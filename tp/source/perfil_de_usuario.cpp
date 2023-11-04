#include "perfil_de_usuario.h"
#include "ui_perfil_de_usuario.h"

perfil_de_usuario::perfil_de_usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::perfil_de_usuario)
{
    ui->setupUi(this);
    ui->nomeagenda->setText("agenda");
}

perfil_de_usuario::~perfil_de_usuario()
{
    delete ui;
}

void perfil_de_usuario::recebe_usuario(QString usuario){
    ui->usuario->setText(usuario);
}

void perfil_de_usuario::recebe_senha(QString senha){
    ui->senha_2->setText(senha);
}
void perfil_de_usuario::on_voltar_clicked()
{
    close();
}

