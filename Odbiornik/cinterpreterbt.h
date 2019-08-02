#ifndef CINTERPRETERBT_H
#define CINTERPRETERBT_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QTextStream>

class CInterpreterBT : public QObject
{
    Q_OBJECT
private:
    QString received;
    QString object;
    QString currentState;
    int choose;
    QVector<QString> message;
public:
    explicit CInterpreterBT(QObject *parent = nullptr);

signals:
    void newMessage(QVector<QString> message);
public slots:
    void convertSignal();
    void checkMessage(QString mess); //czyta wiad. do konwertowania
};

#endif // CINTERPRETERBT_H
