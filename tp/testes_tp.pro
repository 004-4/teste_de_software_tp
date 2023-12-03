QT += testlib
QT += gui core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt warn_on depend_includepath testcase c++17

TEMPLATE = app

SOURCES +=  tp/source/tst_testes_de_unidade.cpp \
    tp/source/adicionar_contato.cpp \
    tp/source/atualizar_contato.cpp \
    tp/source/cadastrar.cpp \
    tp/source/login.cpp \
    tp/source/main_app.cpp \
    tp/source/mocked_agenda_de_contatos.cpp \
    tp/source/pagina_principal.cpp \
    tp/source/perfil_de_usuario.cpp \
    tp/source/pesquisar_na_agenda.cpp \
    tp/source/populando_mocked_agenda.cpp

FORMS += \
    adicionar_contato.ui \
    atualizar_contato.ui \
    cadastrar.ui \
    login.ui \
    pagina_principal.ui \
    perfil_de_usuario.ui \
    pesquisar_na_agenda.ui

HEADERS += \
    tp/include/adicionar_contato.h \
    tp/include/atualizar_contato.h \
    tp/include/cadastrar.h \
    tp/include/login.h \
    tp/include/mocked_agenda_de_contatos.h \
    tp/include/mocked_agenda_interface.h \
    tp/include/pagina_principal.h \
    tp/include/perfil_de_usuario.h \
    tp/include/pesquisar_na_agenda.h \
    tp/include/populando_mocked_agenda.h
