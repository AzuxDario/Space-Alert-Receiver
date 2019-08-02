#include "creceiver.h"

CReceiver::CReceiver(int port, QObject *parent) : QObject(parent)
{
    this->port = port;
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(static_cast<quint16>(port), QUdpSocket::ShareAddress);
    connect(udpSocket, SIGNAL(readyRead()),
            this, SLOT(processPendingDatagrams()));
}

void CReceiver::processPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(static_cast<int>(udpSocket->pendingDatagramSize()));
        udpSocket->readDatagram(datagram.data(), datagram.size());
        message = (tr("%1").arg(datagram.data()));
        emit newMessageArrived(message);
    }
}
