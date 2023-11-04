#ifndef PERFIL_DE_USUARIO_H
#define PERFIL_DE_USUARIO_H

#include <QDialog>
#include <QListWidget>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class perfil_de_usuario;
}

class perfil_de_usuario : public QDialog
{
    Q_OBJECT

public:
    explicit perfil_de_usuario(QWidget *parent = nullptr);
    ~perfil_de_usuario();
    void recebe_usuario(QString usuario);
    void recebe_senha(QString senha);

private slots:
    void on_voltar_clicked();

private:
    Ui::perfil_de_usuario *ui;
};

#endif // PERFIL_DE_USUARIO_H
