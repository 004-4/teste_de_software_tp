#include "adicionar_contato.h"
#include "ui_adicionar_contato.h"

adicionar_contato::adicionar_contato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionar_contato)
{
    ui->setupUi(this);
}

adicionar_contato::~adicionar_contato()
{
    delete ui;
}

void adicionar_contato::on_adicionar_clicked()
{
    QString nome = ui->nome->text();
    QString celular = ui->celular->text();
    QString email = ui->email->text();
    QString cat = ui->categoria->text();
    QMessageBox::information(this, "Dados digitados", "Nome: " + nome + "\nCelular: " + celular + "\nE-mail: " + email + "\nCategoria: " + cat, "Okay");

    QSqlQuery query;

    query.prepare("INSERT INTO agenda (Nome, [Celular/Telefone], [E-mail], Categoria) VALUES ('"+nome+"', '"+celular+"', '"+email+"', '"+cat+"')");
    if (query.exec()){
        QMessageBox::information( this, "", "\n Contato adicionado com sucesso!", "Okay");
        ui->nome->clear();
        ui->celular->clear();
        ui->email->clear();
        ui->categoria->clear();
        ui->nome->setFocus();
    }
    else{
        qDebug()<< "Erro ao inserir contato";
    }
    close();
}


void adicionar_contato::on_cancelar_clicked()
{
    close();
}
