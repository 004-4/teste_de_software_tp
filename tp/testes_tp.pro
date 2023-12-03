QT += testlib
QT += gui core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt warn_on depend_includepath testcase c++17

TEMPLATE = app

SOURCES +=  source/tst_testes_de_unidade.cpp \
    source/adicionar_contato.cpp \
    source/atualizar_contato.cpp \
    source/cadastrar.cpp \
    source/login.cpp \
    source/main_app.cpp \
    source/mocked_agenda_de_contatos.cpp \
    source/pagina_principal.cpp \
    source/perfil_de_usuario.cpp \
    source/pesquisar_na_agenda.cpp \
    source/populando_mocked_agenda.cpp

FORMS += \
    ui/adicionar_contato.ui \
    ui/atualizar_contato.ui \
    ui/cadastrar.ui \
    ui/login.ui \
    ui/pagina_principal.ui \
    ui/perfil_de_usuario.ui \
    ui/pesquisar_na_agenda.ui

HEADERS += \
    include/adicionar_contato.h \
    include/atualizar_contato.h \
    include/cadastrar.h \
    include/login.h \
    include/mocked_agenda_de_contatos.h \
    include/mocked_agenda_interface.h \
    include/pagina_principal.h \
    include/perfil_de_usuario.h \
    include/pesquisar_na_agenda.h \
    include/populando_mocked_agenda.h
