#include <QtTest>

#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>

#include "adicionar_contato.h"
#include "atualizar_contato.h"
#include "cadastrar.h"
#include "login.h"
#include "pagina_principal.h"
#include "pesquisar_na_agenda.h"
#include "perfil_de_usuario.h"

#include "mocked_agenda_de_contatos.h"
#include "populando_mocked_agenda.h"

class testes_de_unidade : public QObject
{
    Q_OBJECT

public:
    testes_de_unidade();
    ~testes_de_unidade();

//    void excluir_auxiliar();

private slots:

//    pagina de login

    void test_usuario_de_login();
    void test_mutacao_usuario_de_login();
    void test_senha_de_login();
    void test_mutacao_senha_de_login();
    void test_logintoprin_button();
    void test_login_to_cadastrar_button();

//    pagina de cadastrar

    void test_cadastrarusuario_to_login_button();
    void test_cancelar_to_login_button();


//    pagina de pagina_principal

    void test_adicionarcontato_to_adicionar_contato_button();
    void test_veragenda_to_pesquisar_na_agenda_button();
    void test_verperfil_to_perfil_de_usuario_button();

//    pagina de adicionar_contato

    void test_adicionar_to_login_button();
    void test_adicionar_confere_num_de_usuarios_button();
    void test_adicionar_confere_id_de_usuarios_button();
    void test_adicionar_confere_nome_de_usuarios_button();
    void test_adicionar_confere_celular_de_usuarios_button();
    void test_adicionar_confere_email_de_usuarios_button();
    void test_adicionar_confere_categoria_de_usuarios_button();
    void test_cancelaraddc_to_paginaprin_button();
    void test_adicionar_confere_nome_errado_de_usuarios();
    void test_adicionar_confere_celular_errado_de_usuarios();
    void test_adicionar_confere_email_errado_de_usuarios();
    void test_adicionar_confere_categoria_errada_de_usuarios();


//    pagina de pesquisar_na_agenda

    void test_atualizarcontato_to_atualizar_contato();
    void test_pesquisar_nome_button();
    void test_pesquisar_celular_button();
    void test_pesquisar_email_button();
    void test_pesquisar_categoria_button();
    void test_voltar_to_paginaprin_button();


//    pagina de atualizar_contato

    void test_atualizarcontato_nome();
    void test_atualizarcontato_celular();
    void test_atualizarcontato_email();
    void test_atualizarcontato_categoria();
    void test_atualizarcontato_nome_e_celular();
    void test_atualizarcontato_nome_e_email();
    void test_atualizarcontato_nome_e_categoria();
    void test_atualizarcontato_celular_e_email();
    void test_atualizarcontato_celular_e_categoria();
    void test_atualizarcontato_email_e_categoria();
    void test_atualizarcontato_nome_celular_e_email();
    void test_atualizarcontato_nome_celular_e_categoria();
    void test_atualizarcontato_nome_email_e_categoria();
    void test_atualizarcontato_celular_email_e_categoria();
    void test_atualizarcontato_nome_celular_email_e_categoria();
    void test_atualizar_to_pesquisar_na_agenda_button();
    void test_cancelaratc_to_pesquisar_na_agenda_button();

//   pagina de ver perfil do usuário

    void test_voltar_to_pagina_principal_button();
    void test_usuario_correto();
    void test_senha_correta();
    void test_nome_tabela_no_banco_de_dados_correto();

};

testes_de_unidade::testes_de_unidade()
{

}

testes_de_unidade::~testes_de_unidade()
{

}

void testes_de_unidade::test_usuario_de_login()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    login Login;
    QLineEdit* usuario = Login.findChild<QLineEdit*>("usuario");

    QString usuario_esperado = "claraboia";
    QTest::keyClicks(usuario, usuario_esperado);

    QString usuario_digitado = usuario->text();

    QCOMPARE(usuario_digitado, usuario_esperado);
}
void testes_de_unidade::test_mutacao_usuario_de_login()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    login Login;
    QLineEdit* usuario = Login.findChild<QLineEdit*>("usuario");

    QString usuario_esperado = "aiobaralc";
    QTest::keyClicks(usuario, usuario_esperado);

    QString usuario_digitado = usuario->text();

    QVERIFY(!(usuario_digitado != usuario_esperado));
}
void testes_de_unidade::test_senha_de_login()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    login Login;
    QLineEdit* senha = Login.findChild<QLineEdit*>("senha");

    QString senha_esperada = "bolinho86";
    QTest::keyClicks(senha, senha_esperada);

    QString senha_digitada = senha->text();

    QCOMPARE(senha_digitada, senha_esperada);
}
void testes_de_unidade::test_mutacao_senha_de_login()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    login Login;
    QLineEdit* senha = Login.findChild<QLineEdit*>("senha");

    QString senha_esperada = "86ohnilob";
    QTest::keyClicks(senha, senha_esperada);

    QString senha_digitada = senha->text();

    QVERIFY(!(senha_digitada != senha_esperada));
}
void testes_de_unidade::test_logintoprin_button()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton logintoprin("Login");
    pagina_principal PPrin;

    connect(&logintoprin, &QPushButton::clicked, &PPrin, &QDialog::show);

    logintoprin.click();

    QVERIFY(PPrin.isVisible());

}
void testes_de_unidade::test_login_to_cadastrar_button()
{
    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton logintocad("Cadastrar");
    cadastrar Cadastrar;

    connect(&logintocad, &QPushButton::clicked, &Cadastrar, &QDialog::show);

    logintocad.click();

    QVERIFY(Cadastrar.isVisible());
}



void testes_de_unidade::test_cadastrarusuario_to_login_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton cadutologin("Cadastrar");
    login Login;

    connect(&cadutologin, &QPushButton::clicked, &Login, &QDialog::show);

    cadutologin.click();

    QVERIFY(Login.isVisible());
}
void testes_de_unidade::test_cancelar_to_login_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton cancelar("Cancelar");
    login Login;

    connect(&cancelar, &QPushButton::clicked, &Login, &QDialog::show);

    cancelar.click();

    QVERIFY(Login.isVisible());
}



void testes_de_unidade::test_adicionarcontato_to_adicionar_contato_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton addcontato("Adicionar contato");
    adicionar_contato AddC;

    connect(&addcontato, &QPushButton::clicked, &AddC, &QDialog::show);

    addcontato.click();

    QVERIFY(AddC.isVisible());
}
void testes_de_unidade::test_veragenda_to_pesquisar_na_agenda_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton veragenda("Ver agenda");
    pesquisar_na_agenda PAgenda;

    connect(&veragenda, &QPushButton::clicked, &PAgenda, &QDialog::show);

    veragenda.click();

    QVERIFY(PAgenda.isVisible());
}
void testes_de_unidade::test_verperfil_to_perfil_de_usuario_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton verperfil("Ver perfil");
    perfil_de_usuario PU;

    connect(&verperfil, &QPushButton::clicked, &PU, &QDialog::show);

    verperfil.click();

    QVERIFY(PU.isVisible());
}


void testes_de_unidade::test_adicionar_to_login_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton adicionar("Adicionar");
    login Login;

    connect(&adicionar, &QPushButton::clicked, &Login, &QDialog::show);

    adicionar.click();

    QVERIFY(Login.isVisible());
}
void testes_de_unidade::test_adicionar_confere_num_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.rowCount(), 3);

}
void testes_de_unidade::test_adicionar_confere_id_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.item(0, 0)->text(), "10");
    QCOMPARE(agenda.item(1, 0)->text(), "21");
}
void testes_de_unidade::test_adicionar_confere_nome_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.item(0, 1)->text(), "Julia");
    QCOMPARE(agenda.item(1, 1)->text(), "Olivia Palito");
}
void testes_de_unidade::test_adicionar_confere_celular_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.item(0, 2)->text(), "31999731588");
    QCOMPARE(agenda.item(1, 2)->text(), "31999561390");
}
void testes_de_unidade::test_adicionar_confere_email_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.item(0, 3)->text(), "julia@hotmail.com");
    QCOMPARE(agenda.item(1, 3)->text(), "op@popai.com");
}
void testes_de_unidade::test_adicionar_confere_categoria_de_usuarios_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QCOMPARE(agenda.item(0, 4)->text(), "Familia");
    QCOMPARE(agenda.item(1, 4)->text(), "Amigos");
}
void testes_de_unidade::test_cancelaraddc_to_paginaprin_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton cancelar("Cancelar");
    login Login;

    connect(&cancelar, &QPushButton::clicked, &Login, &QDialog::show);

    cancelar.click();

    QVERIFY(Login.isVisible());
}
void testes_de_unidade::test_adicionar_confere_nome_errado_de_usuarios(){
    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QVERIFY((agenda.item(0, 1)->text() != "Carla"));
}
void testes_de_unidade::test_adicionar_confere_celular_errado_de_usuarios(){
    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QVERIFY((agenda.item(1, 2)->text() != "1123242526"));
}
void testes_de_unidade::test_adicionar_confere_email_errado_de_usuarios(){
    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QVERIFY((agenda.item(0, 3)->text() != "cacau@brasil.br"));
}
void testes_de_unidade::test_adicionar_confere_categoria_errada_de_usuarios(){
    int argc = 0;
    QApplication app(argc, nullptr);

    QTableWidget agenda;
    mocked_agenda_de_contatos MAgenda;
    populando_mocked_agenda PopAgenda(&agenda, &MAgenda);

    PopAgenda.popular_agenda();

    QVERIFY((agenda.item(1, 4)->text() != "Padaria"));
}


void testes_de_unidade::test_atualizarcontato_to_atualizar_contato(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton atualizarcon("Atualizar contato");
    atualizar_contato AtCon;

    connect(&atualizarcon, &QPushButton::clicked, &AtCon, &QDialog::show);

    atualizarcon.click();

    QVERIFY(AtCon.isVisible());
}
void testes_de_unidade::test_pesquisar_nome_button(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;
    QVector<QString> contato_recebido = MAgenda.pesquisa_por_nome("Julia");

    QVector<QString> contato_esperado = { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" };

    QCOMPARE(contato_recebido, contato_esperado);
}
void testes_de_unidade::test_pesquisar_celular_button(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;
    QVector<QString> contato_recebido = MAgenda.pesquisa_por_celular("31999731588");

    QVector<QString> contato_esperado = { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" };

    QCOMPARE(contato_recebido, contato_esperado);
}
void testes_de_unidade::test_pesquisar_email_button(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;
    QVector<QString> contato_recebido = MAgenda.pesquisa_por_email("julia@hotmail.com");

    QVector<QString> contato_esperado = { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" };

    QCOMPARE(contato_recebido, contato_esperado);
}
void testes_de_unidade::test_pesquisar_categoria_button(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;
    QVector<QString> contato_recebido = MAgenda.pesquisa_por_categoria("Familia");

    QVector<QString> contato_esperado = { "10", "Julia", "31999731588", "julia@hotmail.com", "Familia" };

    QCOMPARE(contato_recebido, contato_esperado);
}
void testes_de_unidade::test_voltar_to_paginaprin_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton voltar("Voltar");
    pagina_principal PPrin;

    connect(&voltar, &QPushButton::clicked, &PPrin, &QDialog::show);

    voltar.click();

    QVERIFY(PPrin.isVisible());
}


void testes_de_unidade::test_atualizarcontato_nome(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "Júlia", "", "", "");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[1], QString("Júlia"));
}
void testes_de_unidade::test_atualizarcontato_celular(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "", "31998989898", "", "");

        const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[2], QString("31998989898"));
}
void testes_de_unidade::test_atualizarcontato_email(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "", "", "julia@gmail.com", "");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[3], QString("julia@gmail.com"));
}
void testes_de_unidade::test_atualizarcontato_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "", "", "", "Trabalho");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[4], QString("Trabalho"));
}

void testes_de_unidade::test_atualizarcontato_nome_e_celular(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "Júlia", "3194557890", "", "");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[1], QString("Júlia"));
    QCOMPARE(contatoatual[2], QString("3194557890"));
}
void testes_de_unidade::test_atualizarcontato_nome_e_email(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "Olívia", "", "opalito@popai.br", "");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[1], QString("Olívia"));
    QCOMPARE(contatoatual[3], QString("opalito@popai.br"));
}
void testes_de_unidade::test_atualizarcontato_nome_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "Juju", "", "", "Amigos");

        const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[1], QString("Juju"));
    QCOMPARE(contatoatual[4], QString("Amigos"));
}
void testes_de_unidade::test_atualizarcontato_celular_e_email(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "", "3194557790", "palitoolivia@popai.br", "");

        const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[2], QString("3194557790"));
    QCOMPARE(contatoatual[3], QString("palitoolivia@popai.br"));
}
void testes_de_unidade::test_atualizarcontato_celular_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "", "3194557790", "", "Trabalho");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[2], QString("3194557790"));
    QCOMPARE(contatoatual[4], QString("Trabalho"));
}
void testes_de_unidade::test_atualizarcontato_email_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "", "", "palitolivi@popai.br", "Faculdade");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[3], QString("palitolivi@popai.br"));
    QCOMPARE(contatoatual[4], QString("Faculdade"));

}

void testes_de_unidade::test_atualizarcontato_nome_celular_e_email(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "Ju", "3194557090", "juju@outlook.com", "");

        const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[1], QString("Ju"));
    QCOMPARE(contatoatual[2], QString("3194557090"));
    QCOMPARE(contatoatual[3], QString("juju@outlook.com"));

}
void testes_de_unidade::test_atualizarcontato_nome_celular_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(10, "Juli", "3194557099", "", "UFMG");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(10);

    QCOMPARE(contatoatual[1], QString("Juli"));
    QCOMPARE(contatoatual[2], QString("3194557099"));
    QCOMPARE(contatoatual[4], QString("UFMG"));

}
void testes_de_unidade::test_atualizarcontato_nome_email_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "Olívia", "", "opalito@popai.br", "Design");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[1], QString("Olívia"));
    QCOMPARE(contatoatual[3], QString("opalito@popai.br"));
    QCOMPARE(contatoatual[4], QString("Design"));

}
void testes_de_unidade::test_atualizarcontato_celular_email_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "", "3133325321", "opalito@popai.br", "Design");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[2], QString("3133325321"));
    QCOMPARE(contatoatual[3], QString("opalito@popai.br"));
    QCOMPARE(contatoatual[4], QString("Design"));
}

void testes_de_unidade::test_atualizarcontato_nome_celular_email_e_categoria(){
    int argc = 0;
    QApplication app(argc, nullptr);

    mocked_agenda_de_contatos MAgenda;

    MAgenda.atualizar_contatos(21, "LivP", "3133325721", "olipalito@popai.br", "Serviços");

    const QVector<QString>& contatoatual = MAgenda.pesquisa_por_id(21);

    QCOMPARE(contatoatual[1], QString("LivP"));
    QCOMPARE(contatoatual[2], QString("3133325721"));
    QCOMPARE(contatoatual[3], QString("olipalito@popai.br"));
    QCOMPARE(contatoatual[4], QString("Serviços"));
}

void testes_de_unidade::test_atualizar_to_pesquisar_na_agenda_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton atualizar("Atualizar");
    pesquisar_na_agenda PAgenda;

    connect(&atualizar, &QPushButton::clicked, &PAgenda, &QDialog::show);

    atualizar.click();

    QVERIFY(PAgenda.isVisible());
}
void testes_de_unidade::test_cancelaratc_to_pesquisar_na_agenda_button(){

    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton cancelar("Cancelar");
    pesquisar_na_agenda PAgenda;

    connect(&cancelar, &QPushButton::clicked, &PAgenda, &QDialog::show);

    cancelar.click();

    QVERIFY(PAgenda.isVisible());
}



void testes_de_unidade::test_voltar_to_pagina_principal_button(){
    int argc = 0;
    QApplication app(argc, nullptr);

    QPushButton voltar("Voltar");
    pagina_principal PPrin;

    connect(&voltar, &QPushButton::clicked, &PPrin, &QDialog::show);

    voltar.click();

    QVERIFY(PPrin.isVisible());
}
void testes_de_unidade::test_usuario_correto(){

    int argc = 0;
    QApplication app(argc, nullptr);

    perfil_de_usuario PU;
    QLineEdit* usuario = PU.findChild<QLineEdit*>("usuario");

    QString usuario_esperado = "claraboia";
    QTest::keyClicks(usuario, usuario_esperado);

    QString usuario_digitado = usuario->text();

    QCOMPARE(usuario_digitado, usuario_esperado);
}
void testes_de_unidade::test_senha_correta(){

    int argc = 0;
    QApplication app(argc, nullptr);

    login Login;
    QLineEdit* senha = Login.findChild<QLineEdit*>("senha");

    QString senha_esperada = "bolinho86";
    QTest::keyClicks(senha, senha_esperada);

    QString senha_digitada = senha->text();

    pagina_principal PPrin;
    PPrin.passa_senha(senha_digitada);

    perfil_de_usuario PU;
    PU.recebe_senha(senha_digitada);

    QString senha2 = PU.findChild<QLineEdit*>("senha_2")->text();

    QCOMPARE(senha2, senha_esperada);

}
void testes_de_unidade::test_nome_tabela_no_banco_de_dados_correto(){

    int argc = 0;
    QApplication app(argc, nullptr);

    perfil_de_usuario PU;
    QString nometabela = PU.findChild<QLineEdit*>("nomeagenda")->text();

    QString nome_esperado = "agenda";

    QCOMPARE(nometabela, nome_esperado);

}

QTEST_APPLESS_MAIN(testes_de_unidade)

#include "tst_testes_de_unidade.moc"
