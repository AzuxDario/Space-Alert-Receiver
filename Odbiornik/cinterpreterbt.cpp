#include "cinterpreterbt.h"

CInterpreterBT::CInterpreterBT(QObject *parent) : QObject(parent)
{

}

void CInterpreterBT::convertSignal()
{
   received.replace(";"," ");
   QTextStream stream(&received);
   while(stream.atEnd() == 0)
   {
       stream >> object;
       message.push_back(object);
   }
}
void CInterpreterBT::checkMessage(QString mess)
{
   message.clear();
   received = mess;
   convertSignal();
   emit newMessage(message);
}
