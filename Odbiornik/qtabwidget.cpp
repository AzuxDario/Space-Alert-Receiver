#include "qtabwidget.h"

QTabWidget::QTabWidget(QWidget *parent) : QWidget(parent)
{
    title = new QLabel(tab1);
    title->setGeometry(20,20,680,30);
    title->setText("Obecne parametry astronauty");
    title->setStyleSheet("font-size:20px;");
    title->setAlignment(Qt::AlignCenter);
    state = new QLabel(tab1);
    state->setGeometry(20,80,300,40);
    state->setText("Stan: ");
    state->setStyleSheet("font-size:20px;");
    stateValue = new QLabel(tab1);
    stateValue->setGeometry(150,80,300,40);
    stateValue->setStyleSheet("font-size:20px;");
    pulse = new QLabel(tab1);
    pulse->setGeometry(20,140,300,40);
    pulse->setText("Puls: ");
    pulse->setStyleSheet("font-size:20px;");
    pulseValue = new QLabel(tab1);
    pulseValue->setGeometry(150,140,300,40);
    pulseValue->setStyleSheet("font-size:20px;");
    skafander = new QLabel(tab1);
    skafander->setGeometry(20,200,300,40);
    skafander->setText("Skafander: ");
    skafander->setStyleSheet("font-size:20px;");
    skafanderValue = new QLabel(tab1);
    skafanderValue->setGeometry(150,200,300,40);
    skafanderValue->setStyleSheet("font-size:20px;");
    pressure1 = new QLabel(tab1);
    pressure1->setGeometry(320,80,300,40);
    pressure1->setText("Ciśnienie skurczowe: ");
    pressure1->setStyleSheet("font-size:20px;");
    pressure1Value = new QLabel(tab1);
    pressure1Value->setGeometry(570,80,300,40);
    pressure1Value->setStyleSheet("font-size:20px;");
    pressure2 = new QLabel(tab1);
    pressure2->setGeometry(320,140,300,40);
    pressure2->setText("Ciśnienie rozkurczowe: ");
    pressure2->setStyleSheet("font-size:20px;");
    pressure2Value = new QLabel(tab1);
    pressure2Value->setGeometry(570,140,300,40);
    pressure2Value->setStyleSheet("font-size:20px;");
    temp = new QLabel(tab1);
    temp->setGeometry(320,200,300,40);
    temp->setText("Temperatura: ");
    temp->setStyleSheet("font-size:20px;");
    tempValue = new QLabel(tab1);
    tempValue->setGeometry(570,200,300,40);
    tempValue->setStyleSheet("font-size:20px;");
}
