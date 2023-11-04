#ifndef PESQUISAR_NA_AGENDA_H
#define PESQUISAR_NA_AGENDA_H

#include <QDialog>

#include <QtSql>
#include <QMessageBox>

#include "atualizar_contato.h"

namespace Ui {
class pesquisar_na_agenda;
}

class pesquisar_na_agenda : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisar_na_agenda(QWidget *parent = nullptr);
    ~pesquisar_na_agenda();

private slots:

    void on_excluircontato_clicked();

    void on_atualizarcontato_clicked();

    void on_pesquisar_clicked();

    void on_voltar_clicked();

    void on_limparbusca_clicked();

private:
    Ui::pesquisar_na_agenda *ui;
};

#endif // PESQUISAR_NA_AGENDA_H
