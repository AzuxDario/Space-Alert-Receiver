#ifndef QTABWIDGET_H
#define QTABWIDGET_H

#include <QWidget>
#include <QLabel>

class QTabWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QTabWidget(QWidget *parent = 0);

public:
    QLabel *title;
    QLabel *state;
    QLabel *stateValue;
    QLabel *pulse;
    QLabel *pulseValue;
    QLabel *pressure1;
    QLabel *pressure1Value;
    QLabel *pressure2;
    QLabel *pressure2Value;
    QLabel *temp;
    QLabel *tempValue;
    QLabel *skafander;
    QLabel *skafanderValue;
signals:

public slots:
};

#endif // QTABWIDGET_H
