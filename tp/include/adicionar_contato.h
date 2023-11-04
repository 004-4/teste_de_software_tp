#ifndef ADICIONAR_CONTATO_H
#define ADICIONAR_CONTATO_H

#include <QDialog>

#include <QtSql>
#include <QMessageBox>

namespace Ui {
class adicionar_contato;
}

class adicionar_contato : public QDialog
{
    Q_OBJECT

public:
    explicit adicionar_contato(QWidget *parent = nullptr);
    ~adicionar_contato();

private slots:

    void on_adicionar_clicked();

    void on_cancelar_clicked();

private:
    Ui::adicionar_contato *ui;
};

#endif // ADICIONAR_CONTATO_H
