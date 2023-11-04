#ifndef PAGINA_PRINCIPAL_H
#define PAGINA_PRINCIPAL_H

#include <QDialog>


#include "adicionar_contato.h"
#include "pesquisar_na_agenda.h"
#include "perfil_de_usuario.h"

#include <QDialog>

#include <QtSql>
#include <QMessageBox>

namespace Ui {
class pagina_principal;
}

class pagina_principal : public QDialog
{
    Q_OBJECT

public:
    explicit pagina_principal(QWidget *parent = nullptr);
    ~pagina_principal();
    QString passa_usuario(QString user);

    QString passa_senha(QString password);

private slots:
    void on_adicionarcontato_clicked();

    void on_veragenda_clicked();

    void on_verperfil_clicked();

private:
    Ui::pagina_principal *ui;
    QString user;
    QString password;

};

#endif // PAGINA_PRINCIPAL_H
