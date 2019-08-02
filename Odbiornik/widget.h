#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTableWidget>
#include <QCheckBox>
#include <QVector>
#include <QTabWidget>
#include <QMenuBar>
#include <QTimer>
#include <QListWidget>
#include <QHeaderView>
#include "creceiver.h"
#include "csender.h"
#include "cinterpreter.h"
#include "ctablechanger.h"
#include "widgetabout.h"
#include "cinterpreterbt.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    CReceiver *receiverAlert;
    CReceiver *receiverState;
    CReceiver *receiverBT;
    CSender *sender1;
    CSender *sender2;
    CSender *sender3;
    CSender *sender4;
    CInterpreter *interpreterAlert;
    CInterpreter *interpreterState;
    CInterpreterBT *interpreterBT;
    CTableChanger *tableChanger;
    WidgetAbout *widgetAbout;


    //----Pasek zadań----//
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QAction *buttonClose;
    QAction *buttonHelp;

    //----Tablica historii----//
    QTableWidget *tableHistory;
    QCheckBox *isScroll;
    QTabWidget *tabs;
    QWidget *tab1;
    QWidget *tab2;
    QWidget *tab3;
    QWidget *tab4;
    QWidget *arrayTabs;

    QListWidget *listDevices1;
    QLabel *listDevicesHeader1;
    QListWidget *listDevices2;
    QLabel *listDevicesHeader2;
    QListWidget *listDevices3;
    QLabel *listDevicesHeader3;

    //----Aktualne parametry----//
    QLabel *titlea1;
    QLabel *statea1;
    QLabel *stateValuea1;
    QLabel *pulsea1;
    QLabel *pulseValuea1;
    QLabel *pressure1a1;
    QLabel *pressure1Valuea1;
    QLabel *pressure2a1;
    QLabel *pressure2Valuea1;
    QLabel *tempa1;
    QLabel *tempValuea1;
    QLabel *spacesutia1;
    QLabel *spacesuitValuea1;
    QLabel *oxygena1;
    QLabel *oxygenValuea1;

    QLabel *titlea2;
    QLabel *statea2;
    QLabel *stateValuea2;
    QLabel *pulsea2;
    QLabel *pulseValuea2;
    QLabel *pressure1a2;
    QLabel *pressure1Valuea2;
    QLabel *pressure2a2;
    QLabel *pressure2Valuea2;
    QLabel *tempa2;
    QLabel *tempValuea2;
    QLabel *spacesuita2;
    QLabel *spacesuitValuea2;
    QLabel *oxygena2;
    QLabel *oxygenValuea2;

    QLabel *titlea3;
    QLabel *statea3;
    QLabel *stateValuea3;
    QLabel *pulsea3;
    QLabel *pulseValuea3;
    QLabel *pressure1a3;
    QLabel *pressure1Valuea3;
    QLabel *pressure2a3;
    QLabel *pressure2Valuea3;
    QLabel *tempa3;
    QLabel *tempValuea3;
    QLabel *spacesuita3;
    QLabel *spacesuitValuea3;
    QLabel *oxygena3;
    QLabel *oxygenValuea3;

    QLabel *titlea4;
    QLabel *statea4;
    QLabel *stateValuea4;
    QLabel *pulsea4;
    QLabel *pulseValuea4;
    QLabel *pressure1a4;
    QLabel *pressure1Valuea4;
    QLabel *pressure2a4;
    QLabel *pressure2Valuea4;
    QLabel *tempa4;
    QLabel *tempValuea4;
    QLabel *spacesuita4;
    QLabel *spacesuitValuea4;
    QLabel *oxygena4;
    QLabel *oxygenValuea4;

    //----Zegary----//
    QTimer *timera1;
    QTimer *timera2;
    QTimer *timera3;
    QTimer *timera4;
    QTimer *timerarea1;
    QTimer *timerarea2;
    QTimer *timerarea3;

    QPushButton *send1;
    QPushButton *send2;
    QPushButton *send3;
    QPushButton *send4;



public slots:
    void closeEvent(QCloseEvent *);
    void changeLabel(QVector<QString> message);
    void timera1TimeOut();
    void timera2TimeOut();
    void timera3TimeOut();
    void timera4TimeOut();
    void timerarea1TimeOut();
    void timerarea2TimeOut();
    void timerarea3TimeOut();
    void sendDatagram1();
    void sendDatagram2();
    void sendDatagram3();
    void sendDatagram4();
    void unlockButton(QVector<QString> wiadomosc);
    void addToListView(QVector<QString> wiadomosc);
    void changeButton();
    void showAboutProgram();


};

#endif // WIDGET_H
