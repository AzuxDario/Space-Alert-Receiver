#ifndef CTABLECHANGER_H
#define CTABLECHANGER_H

#include <QObject>
#include <QTableWidget>
#include <QCheckBox>
#include <QDate>

class CTableChanger : public QObject
{
    Q_OBJECT
public:
    explicit CTableChanger(QTableWidget* table, QCheckBox* check, QObject *parent = nullptr);

private:
    QTableWidget *table;
    QCheckBox *check;
signals:

public slots:
    void addValue(QVector<QString> message);
};

#endif // CTABLECHANGER_H
