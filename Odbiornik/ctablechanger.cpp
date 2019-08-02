#include "ctablechanger.h"

CTableChanger::CTableChanger(QTableWidget* table, QCheckBox* check, QObject *parent) : QObject(parent)
{
    this->table = table;
    this->check = check;
}

void CTableChanger::addValue(QVector<QString> message)
{
    table->setRowCount(table->rowCount()+1);
    if(message[1] == "1")
    {
        message[1] = "Astronauta 1";
    }
    else if(message[1] == "2")
    {
        message[1] = "Astronauta 2";
    }
    else if(message[1] == "3")
    {
        message[1] = "Astronauta 3";
    }
    else if(message[1] == "4")
    {
        message[1] = "Astronauta 4";
    }
    table->setItem(table->rowCount()-1,0,new QTableWidgetItem(QDateTime::currentDateTime().toString("hh:mm:ss")));
    table->setItem(table->rowCount()-1,1,new QTableWidgetItem(message[0]));
    table->setItem(table->rowCount()-1,2,new QTableWidgetItem(message[1]));
    table->setItem(table->rowCount()-1,3,new QTableWidgetItem(message[2]));
    table->setItem(table->rowCount()-1,4,new QTableWidgetItem(message[3]));
    table->setItem(table->rowCount()-1,5,new QTableWidgetItem(message[4]));
    table->setItem(table->rowCount()-1,6,new QTableWidgetItem(message[5]));
    table->setItem(table->rowCount()-1,7,new QTableWidgetItem(message[6]));
    table->setItem(table->rowCount()-1,8,new QTableWidgetItem(message[7]));
    if(check->isChecked())
    {
        table->scrollToBottom();
    }
}
