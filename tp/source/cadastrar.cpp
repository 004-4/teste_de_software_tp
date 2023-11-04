#include "cadastrar.h"
#include "ui_cadastrar.h"

cadastrar::cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrar)
{
    ui->setupUi(this);
}

cadastrar::~cadastrar()
{
    delete ui;
}

void cadastrar::on_cadastrarusuario_clicked()
{
    QMessageBox::information(this, "", "Usuário cadastrado com sucesso!", "Okay!");
        close();
}


void cadastrar::on_cancelar_clicked()
{
    close();
}
