#ifndef CADASTRAR_H
#define CADASTRAR_H

#include <QDialog>

#include <QMessageBox>

namespace Ui {
class cadastrar;
}

class cadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit cadastrar(QWidget *parent = nullptr);
    ~cadastrar();

private slots:
    void on_cadastrarusuario_clicked();

    void on_cancelar_clicked();

private:
    Ui::cadastrar *ui;
};

#endif // CADASTRAR_H
