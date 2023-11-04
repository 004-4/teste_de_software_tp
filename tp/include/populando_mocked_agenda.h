#ifndef POPULANDO_MOCKED_AGENDA_H
#define POPULANDO_MOCKED_AGENDA_H

#include "mocked_agenda_interface.h"
#include <QTableWidget>

class populando_mocked_agenda {
public:
    populando_mocked_agenda(QTableWidget *tableWidget, mocked_agenda_interface *database);

    void popular_agenda();
private:
    QTableWidget *agenda;
    mocked_agenda_interface *bd;
};

#endif // POPULANDO_MOCKED_AGENDA_H
