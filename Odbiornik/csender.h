#ifndef CSENDER_H
#define CSENDER_H

#include <QObject>
#include <QtNetwork>
#include <QString>

class CSender : public QObject
{
    Q_OBJECT
public:
    explicit CSender(QString address, int port, QObject *parent = nullptr);

private:
    QUdpSocket *udpSocket;
    QHostAddress address;
    int port;
signals:

public slots:
    void broadcastDatagram();
};

#endif // CSENDER_H
