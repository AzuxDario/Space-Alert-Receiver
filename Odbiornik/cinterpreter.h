#ifndef INTERPRETER_H
#define INTERPRETER_H
#include <QObject>
#include <QString>
#include <QTextStream>
#include <QVector>

class CInterpreter : public QObject
{
    Q_OBJECT
private:
    QString received;
    QString object;
    QString currentState;
    int choose;
    QVector<QString> message;

public:
    explicit CInterpreter(QObject *parent = nullptr);

signals:
    void newMessage(QVector<QString> message);
public slots:
    void convertSignal();
    void checkMessage(QString mess); //czyta wiad. do konwertowania
};

#endif // INTERPRETER_H
