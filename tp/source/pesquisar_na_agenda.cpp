#include "pesquisar_na_agenda.h"
#include "ui_pesquisar_na_agenda.h"

pesquisar_na_agenda::pesquisar_na_agenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pesquisar_na_agenda)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("SELECT * FROM agenda");
    if (query.exec()){
        int cont = 0;
        ui->agendacontatos->setColumnCount(5);
        while(query.next()){
            ui->agendacontatos->insertRow(cont);
            ui->agendacontatos->setItem(cont, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->agendacontatos->setItem(cont, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->agendacontatos->setItem(cont, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->agendacontatos->setItem(cont, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->agendacontatos->setItem(cont, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->agendacontatos->setRowHeight(cont, 20);
            cont++;
        }
        ui->agendacontatos->setColumnWidth(0, 30);
        ui->agendacontatos->setColumnWidth(1, 150);
        ui->agendacontatos->setColumnWidth(2, 150);
        ui->agendacontatos->setColumnWidth(3, 300);
        ui->agendacontatos->setColumnWidth(4, 300);

        QStringList cabecalhos = {"ID", "Nome", "Celular/Telefone", "E-mail", "Categoria"};
        ui->agendacontatos->setHorizontalHeaderLabels(cabecalhos);
        ui->agendacontatos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->agendacontatos->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->agendacontatos->verticalHeader()->setVisible(false);
        ui->agendacontatos->setStyleSheet("QTableView {selection-background-color:#884ab2}");
    }
    else{
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar o contato", "Okay!");
    }

}

pesquisar_na_agenda::~pesquisar_na_agenda()
{
    delete ui;
}

void pesquisar_na_agenda::on_excluircontato_clicked()
{
    int line = ui->agendacontatos->currentRow();
    int id = ui->agendacontatos->item(line, 0)->text().toInt();

    QMessageBox::StandardButton se = QMessageBox::question(this, "", "Tem certeza de que deseja excluir esse contato?", QMessageBox::Yes|QMessageBox::No);
    QSqlQuery query;

    if (se == QMessageBox::Yes){
        query.prepare("DELETE FROM agenda WHERE ID = "+QString::number(id));
        if (query.exec()){
            QMessageBox::information(this, "", "Contato excluido com sucesso!", "Okay!");
        }
        else{
            QMessageBox::warning(this, "ERRO", "Erro ao excluir o contato!", "Okay!");
        }
        ui->agendacontatos->removeRow(line);
    }
}


void pesquisar_na_agenda::on_atualizarcontato_clicked()
{
    int line = ui->agendacontatos->currentRow();
    int ID = ui->agendacontatos->item(line, 0)->text().toInt();
    atualizar_contato AC(this, ID);
    AC.exec();
    QSqlQuery query;
    query.prepare("SELECT * FROM agenda WHERE ID = "+QString::number(ID));
    if (query.exec()){
        query.first();
        ui->agendacontatos->setItem(line, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->agendacontatos->setItem(line, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->agendacontatos->setItem(line, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->agendacontatos->setItem(line, 4, new QTableWidgetItem(query.value(4).toString()));
    }
}

void pesquisar_na_agenda::on_pesquisar_clicked(){

    QString procurado = ui->barradepesquisa->text();
    QList<QList<QString>> linhascombinadas;

    QSqlQuery query;
    query.prepare("SELECT * FROM agenda WHERE Nome LIKE '%" + procurado + "%'  OR [Celular/Telefone] LIKE '%" + procurado + "%' OR [E-mail] LIKE '%" + procurado + "%' OR Categoria LIKE '%" + procurado + "%'");

    if (query.exec()) {
        while (query.next()) {
            QList<QString> line;
            for (int col = 0; col < 5; ++col) {
                line.append(query.value(col).toString());
            }
            linhascombinadas.append(line);
        }
    } else {
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar o contato!");
    }

    ui->agendacontatos->clearContents();
    ui->agendacontatos->setRowCount(linhascombinadas.size());
    for (int i = 0; i < linhascombinadas.size(); ++i) {
        for (int j = 0; j < linhascombinadas[i].size(); ++j) {
            QTableWidgetItem* item = new QTableWidgetItem(linhascombinadas[i][j]);
            ui->agendacontatos->setItem(i, j, item);
        }
    }
}

void pesquisar_na_agenda::on_voltar_clicked()
{
    close();
}


void pesquisar_na_agenda::on_limparbusca_clicked()
{
    ui->barradepesquisa->clear();
    ui->barradepesquisa->setFocus();
}

