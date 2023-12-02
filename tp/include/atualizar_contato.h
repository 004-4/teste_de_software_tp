#ifndef ATUALIZAR_CONTATO_H
#define ATUALIZAR_CONTATO_H

#include <QDialog>

#include <QtSql>
#include <QMessageBox>

namespace Ui {
class atualizar_contato;
}

class atualizar_contato : public QDialog
{
    Q_OBJECT

public:
    explicit atualizar_contato(QWidget *parent = nullptr, int ID = 0);
    ~atualizar_contato();

    bool get_atualizar_query_result() const;


private slots:
    void on_atualizar_clicked();

    void on_cancelar_clicked();

private:
    Ui::atualizar_contato *ui;
    bool result;
};

#endif // ATUALIZAR_CONTATO_H
