#ifndef CRECEIVER_H
#define CRECEIVER_H

#include <QObject>
#include <QtNetwork>
#include <QString>

class CReceiver : public QObject
{
    Q_OBJECT
public:
    explicit CReceiver(int port,QObject *parent = nullptr);

private:
    QUdpSocket *udpSocket;
    QString message;
    int port;
signals:
    void newMessageArrived(QString message);
public slots:

private slots:
    void processPendingDatagrams();
};

#endif // CRECEIVER_H
