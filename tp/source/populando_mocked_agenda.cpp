#include "populando_mocked_agenda.h"

populando_mocked_agenda::populando_mocked_agenda(QTableWidget *tableWidget, mocked_agenda_interface *BD)
    : agenda(tableWidget), bd(BD) {}

void populando_mocked_agenda::popular_agenda() {

    QVector<QVector<QString>> data = bd->fetchData();

    agenda->setRowCount(data.size());
    agenda->setColumnCount(5);
    QStringList cabecalhos = {"ID", "Nome", "Celular/Telefone", "E-mail", "Categoria"};
    agenda->setHorizontalHeaderLabels(cabecalhos);

    for (int row = 0; row < data.size(); ++row) {
        for (int col = 0; col < data[row].size(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(data[row][col]);
            agenda->setItem(row, col, item);
        }
    }
}
