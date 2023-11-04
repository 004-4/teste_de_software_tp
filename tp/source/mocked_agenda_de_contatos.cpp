#include "mocked_agenda_de_contatos.h"

mocked_agenda_de_contatos::mocked_agenda_de_contatos() {
    dadosguardados = {
        { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" },
        { "21", "Olivia Palito", "31999561390", "op@popai.com", "Amigos" },
        { "15", "Popai Espinafre", "31999561290", "popai@popai.com", "Amigos" }
};
}

QVector<QVector<QString>> mocked_agenda_de_contatos::fetchData(){
    return {
        { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" },
        { "21", "Olivia Palito", "31999561390", "op@popai.com", "Amigos" },
        { "15", "Popai Espinafre", "31999561290", "espinafre@popai.com", "Amigos" }
    };
}

void mocked_agenda_de_contatos::adicionar_contatos(const QString& nome, const QString& celular, const QString& email, const QString& categoria){
    QVector<QString> contato;
    contato << nome << celular << email << categoria;
    dadosguardados.append(contato);
}


void mocked_agenda_de_contatos::atualizar_contatos(int contatoid, const QString& novonome, const QString& novocel, const QString& novoemail, const QString& novacat) {
    for (QVector<QString>& contato : dadosguardados) {
        if (contato[0].toInt() == contatoid) {
            if (novonome != ""){
                contato[1] = novonome;
            }
            if (novocel != ""){
                contato[2] = novocel;
            }
            if (novoemail != ""){
                contato[3] = novoemail;
            }
            if (novacat != ""){
                contato[4] = novacat;
            }
            break;
        }
    }
}

const QVector<QString>& mocked_agenda_de_contatos::pesquisa_por_id(int contatoid) const {
    for (const QVector<QString>& contato : dadosguardados) {
        if (contato[0].toInt() == contatoid) {
            return contato;
        }
    }
    throw std::runtime_error("Contato não encontrado!");
}

const QVector<QString>& mocked_agenda_de_contatos::pesquisa_por_nome(QString contatonome) const {
    for (const QVector<QString>& contato : dadosguardados) {
        if (contato[1] == contatonome) {
            return contato;
        }
    }
    throw std::runtime_error("Contato não encontrado!");
}

const QVector<QString>& mocked_agenda_de_contatos::pesquisa_por_celular(QString contatocel) const {
    for (const QVector<QString>& contato : dadosguardados) {
        if (contato[2] == contatocel) {
            return contato;
        }
    }
    throw std::runtime_error("Contato não encontrado!");
}

const QVector<QString>& mocked_agenda_de_contatos::pesquisa_por_email(QString contatoemail) const {
    for (const QVector<QString>& contato : dadosguardados) {
        if (contato[3] == contatoemail) {
            return contato;
        }
    }
    throw std::runtime_error("Contato não encontrado!");
}

const QVector<QString>& mocked_agenda_de_contatos::pesquisa_por_categoria(QString contatocat) const {
    for (const QVector<QString>& contato : dadosguardados) {
        if (contato[4] == contatocat) {
            return contato;
        }
    }
    throw std::runtime_error("Contato não encontrado!");
}

QString mocked_agenda_de_contatos::excluir_contatos(int contatoid){
    for (auto it = dadosguardados.begin(); it != dadosguardados.end(); ++it) {
        if ((*it)[0].toInt() == contatoid) {
            dadosguardados.erase(it);
        }
    }
    return "Contato excluido";
}
