QT += testlib
QT += gui core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt warn_on depend_includepath testcase c++17

TEMPLATE = app

SOURCES +=  tst_testes_de_unidade.cpp \
    adicionar_contato.cpp \
    atualizar_contato.cpp \
    cadastrar.cpp \
    login.cpp \
    main_app.cpp \
    mocked_agenda_de_contatos.cpp \
    pagina_principal.cpp \
    perfil_de_usuario.cpp \
    pesquisar_na_agenda.cpp \
    populando_mocked_agenda.cpp

FORMS += \
    adicionar_contato.ui \
    atualizar_contato.ui \
    cadastrar.ui \
    login.ui \
    pagina_principal.ui \
    perfil_de_usuario.ui \
    pesquisar_na_agenda.ui

HEADERS += \
    adicionar_contato.h \
    atualizar_contato.h \
    cadastrar.h \
    login.h \
    mocked_agenda_de_contatos.h \
    mocked_agenda_interface.h \
    pagina_principal.h \
    perfil_de_usuario.h \
    pesquisar_na_agenda.h \
    populando_mocked_agenda.h
