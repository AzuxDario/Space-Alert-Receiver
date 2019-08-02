#include "csender.h"

CSender::CSender(QString address, int port, QObject *parent) : QObject(parent)
{
    udpSocket = new QUdpSocket(this);
    this->address.setAddress(address);
    this->port = port;
}

void CSender::broadcastDatagram()
{
    QByteArray datagram = "Odebrałem wiadomość";
    udpSocket->writeDatagram(datagram.data(), datagram.size(),address, static_cast<quint16>(port));

}
