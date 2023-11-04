#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QtSql>

#include "pagina_principal.h"
#include "adicionar_contato.h"
#include "cadastrar.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_logintoprin_clicked();

    void on_cadastrar_clicked();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
