#ifndef MOCKED_AGENDA_INTERFACE_H
#define MOCKED_AGENDA_INTERFACE_H

#include <QVector>

class mocked_agenda_interface {
public:
    virtual QVector<QVector<QString>> fetchData() = 0;
};

#endif // MOCKED_AGENDA_INTERFACE_H
