#include "atualizar_contato.h"
#include "ui_atualizar_contato.h"

static int id;

atualizar_contato::atualizar_contato(QWidget *parent, int ID) :
    QDialog(parent),
    ui(new Ui::atualizar_contato)
{
    ui->setupUi(this);

    id = ID;

    QSqlQuery query;
    query.prepare("SELECT * FROM agenda WHERE Nome ="+QString::number(ID));
    if (query.exec()){
        query.first();
        ui->nome->setText(query.value(1).toString());
        ui->celular->setText(query.value(2).toString());
        ui->email->setText(query.value(3).toString());
        ui->categoria->setText(query.value(4).toString());
    }
    else{
        QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
    }
}

atualizar_contato::~atualizar_contato()
{
    delete ui;
}


void atualizar_contato::on_cancelar_clicked()
{
    close();
}


void atualizar_contato::on_atualizar_clicked()
{
    QString nome =  ui->nome->text();
    QString celular = ui->celular->text();
    QString email = ui->email->text();
    QString cat = ui->categoria->text();
    if (nome != "" && celular != "" && email != "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [Celular/Telefone] = '"+celular+"', [E-mail] = '"+email+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular != "" && email != "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [Celular/Telefone] = '"+celular+"', [E-mail] = '"+email+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular == "" && email != "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [E-mail] = '"+email+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular != "" && email == "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [Celular/Telefone] = '"+celular+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular != "" && email != "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [Celular/Telefone] = '"+celular+"', [E-mail] = '"+email+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular == "" && email != "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [E-mail] = '"+email+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular != "" && email == "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [Celular/Telefone] = '"+celular+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular != "" && email != "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [Celular/Telefone] = '"+celular+"', [E-mail] = '"+email+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular == "" && email == "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular == "" && email != "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [E-mail] = '"+email+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular != "" && email == "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"', [Celular/Telefone] = '"+celular+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular == "" && email == "" && cat != ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Categoria = '"+cat+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular == "" && email != "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [E-mail] = '"+email+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome == "" && celular != "" && email == "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET [Celular/Telefone] = '"+celular+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
    else if (nome != "" && celular == "" && email == "" && cat == ""){
        QSqlQuery query;
        query.prepare("UPDATE agenda SET Nome = '"+nome+"' WHERE ID ="+QString::number(id));
        if (query.exec()){
            result = true;
            close();
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar o contato!");
        }
    }
}

bool atualizar_contato::get_atualizar_query_result() const{
    return result;
}
