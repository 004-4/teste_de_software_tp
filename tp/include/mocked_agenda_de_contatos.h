#ifndef MOCKED_AGENDA_DE_CONTATOS_H
#define MOCKED_AGENDA_DE_CONTATOS_H

#include "mocked_agenda_interface.h"

class mocked_agenda_de_contatos : public mocked_agenda_interface {
public:
    mocked_agenda_de_contatos();

    QVector<QVector<QString>> fetchData() override;

    void adicionar_contatos(const QString& nome, const QString& celular, const QString& email, const QString& categoria);

    void atualizar_contatos(int contatoid, const QString& novonome, const QString& novocel, const QString& novoemail, const QString& novacat);

    QString excluir_contatos(int contatoid);

    const QVector<QString>& pesquisa_por_id(int contatoid) const;

    const QVector<QString>& pesquisa_por_nome(QString contatonome) const;

    const QVector<QString>& pesquisa_por_celular(QString contatocel) const;

    const QVector<QString>& pesquisa_por_email(QString contatoemail) const;

    const QVector<QString>& pesquisa_por_categoria(QString contatocat) const;


private:
    QVector<QVector<QString>> dadosguardados;
};


#endif // MOCKED_AGENDA_DE_CONTATOS_H
