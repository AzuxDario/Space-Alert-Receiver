#include "cinterpreter.h"

CInterpreter::CInterpreter(QObject *parent) : QObject(parent)
{

}

 void CInterpreter::convertSignal()
 {
    received.replace(";"," ");
    QTextStream stream(&received);
    stream >> object;
    message.push_back(object);
    //if(obiekt == "0")
    {
        for(int i=0; i<7; i++)
        {
            stream >> object;
            message.push_back(object);
        }
    }
 }
 void CInterpreter::checkMessage(QString mess)
 {
    message.clear();
    received = mess;
    convertSignal();
    if(message[0] == "0")
    {
        message[0] = "Pomocy";
        message[2] = message[2] + " uderzeń/min";
        message[3] = message[3] + " mm Hg";
        message[4] = message[4] + " mm Hg";
        message[5] = message[5] + " °C";
        if(message[6] == "1")
        {
            message[6] = "szczelny";
        }
        else
        {
            message[6] = "nieszczelny";
        }
        message[7] = message[7] + " %";
    }
    if(message[0] == "11")
    {
        message[0] = "Wracam do bazy";
        message[2] = "";
        message[3] = "";
        message[4] = "";
        message[5] = "";
        message[6] = "";
        message[7] = "";
    }
    if(message[0] == "12")
    {
        message[0] = "Zostaje";
        message[2] = "";
        message[3] = "";
        message[4] = "";
        message[5] = "";
        message[6] = "";
        message[7] = "";
    }
    if(message[0] == "2")
    {
        message[0] = "Na misji";
        message[2] = message[2] + " uderzeń/min";
        message[3] = message[3] + " mm Hg";
        message[4] = message[4] + " mm Hg";
        message[5] = message[5] + " °C";
        if(message[6] == "1")
        {
            message[6] = "szczelny";
        }
        else
        {
            message[6] = "nieszczelny";
        }
        message[7] = message[7] + " %";
    }

    emit newMessage(message);

 }
