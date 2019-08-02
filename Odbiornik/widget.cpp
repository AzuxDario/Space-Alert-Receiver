#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    menuBar = new QMenuBar(this);
    menuBar->setGeometry(0,0,1700,21);
    menuFile = new QMenu(this);
    menuHelp = new QMenu(this);

    menuFile = menuBar->addMenu(tr("&Plik"));
    menuHelp = menuBar->addMenu(tr("P&omoc"));

    buttonClose = new QAction("&Wyjdź",this);
    buttonClose->setShortcut(QKeySequence(tr("Ctrl+W")));
    buttonHelp = new QAction("&Informacje",this);
    buttonHelp->setShortcut(QKeySequence(tr("Ctrl+I")));

    menuFile->addAction(buttonClose);
    menuHelp->addAction(buttonHelp);

    listDevicesHeader1 = new QLabel(this);
    listDevicesHeader1->setGeometry(960,440,180,40);
    listDevicesHeader1->setText("Sektor 1");
    listDevicesHeader1->setStyleSheet("font-size:20px;");

    listDevices1 = new QListWidget(this);
    listDevices1->setGeometry(960,480,180,200);

    listDevicesHeader2 = new QLabel(this);
    listDevicesHeader2->setGeometry(1230,440,180,40);
    listDevicesHeader2->setText("Sektor 2");
    listDevicesHeader2->setStyleSheet("font-size:20px;");

    listDevices2 = new QListWidget(this);
    listDevices2->setGeometry(1230,480,180,200);

    listDevicesHeader3 = new QLabel(this);
    listDevicesHeader3->setGeometry(1500,440,180,40);
    listDevicesHeader3->setText("Sektor 3");
    listDevicesHeader3->setStyleSheet("font-size:20px;");

    listDevices3 = new QListWidget(this);
    listDevices3->setGeometry(1500,480,180,200);

    tableHistory = new QTableWidget(this);
    tableHistory->setGeometry(20,41,920,400);
    tableHistory->setColumnCount(9);
    tableHistory->setRowCount(0);
    //tableHistory->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    tableHistory->verticalHeader()->setVisible(false);
    QStringList lista;
    lista << "Godzina" << "Wiadomość" << "Astronauta" << "Puls" << "C. skurczowe" << "C. rozkurczowe" << "Temp" << "Skafander" << "Tlen";
    tableHistory->setHorizontalHeaderLabels(lista);

    isScroll = new QCheckBox("Automatyczne przewijanie do ostatniej wiadomości",this);
    isScroll->setGeometry(20,461,500,40);
    isScroll->setStyleSheet("font-size:20px;");
    isScroll->setChecked(true);

    tab1 = new QWidget(this);
    tab2 = new QWidget(this);
    tab3 = new QWidget(this);
    tab4 = new QWidget(this);
    tabs = new QTabWidget(this);
    tabs->setGeometry(960,41,720,400);
    tabs->addTab(tab1,"Astronauta 1");
    tabs->addTab(tab2,"Astronauta 2");
    tabs->addTab(tab3,"Astronauta 3");
    tabs->addTab(tab4,"Astronauta 4");

    titlea1 = new QLabel(tab1);
    titlea1->setGeometry(20,20,680,30);
    titlea1->setText("Obecne parametry astronauty: Astronauta 1");
    titlea1->setStyleSheet("font-size:20px;");
    titlea1->setAlignment(Qt::AlignCenter);
    statea1 = new QLabel(tab1);
    statea1->setGeometry(20,80,300,40);
    statea1->setText("Stan: ");
    statea1->setStyleSheet("font-size:20px;");
    stateValuea1 = new QLabel(tab1);
    stateValuea1->setGeometry(150,80,300,40);
    stateValuea1->setStyleSheet("font-size:20px;");
    pulsea1 = new QLabel(tab1);
    pulsea1->setGeometry(20,140,300,40);
    pulsea1->setText("Puls: ");
    pulsea1->setStyleSheet("font-size:20px;");
    pulseValuea1 = new QLabel(tab1);
    pulseValuea1->setGeometry(150,140,300,40);
    pulseValuea1->setStyleSheet("font-size:20px;");
    spacesutia1 = new QLabel(tab1);
    spacesutia1->setGeometry(20,200,300,40);
    spacesutia1->setText("Skafander: ");
    spacesutia1->setStyleSheet("font-size:20px;");
    spacesuitValuea1 = new QLabel(tab1);
    spacesuitValuea1->setGeometry(150,200,300,40);
    spacesuitValuea1->setStyleSheet("font-size:20px;");
    pressure1a1 = new QLabel(tab1);
    pressure1a1->setGeometry(320,80,300,40);
    pressure1a1->setText("Ciśnienie skurczowe: ");
    pressure1a1->setStyleSheet("font-size:20px;");
    pressure1Valuea1 = new QLabel(tab1);
    pressure1Valuea1->setGeometry(570,80,300,40);
    pressure1Valuea1->setStyleSheet("font-size:20px;");
    pressure2a1 = new QLabel(tab1);
    pressure2a1->setGeometry(320,140,300,40);
    pressure2a1->setText("Ciśnienie rozkurczowe: ");
    pressure2a1->setStyleSheet("font-size:20px;");
    pressure2Valuea1 = new QLabel(tab1);
    pressure2Valuea1->setGeometry(570,140,300,40);
    pressure2Valuea1->setStyleSheet("font-size:20px;");
    tempa1 = new QLabel(tab1);
    tempa1->setGeometry(320,200,300,40);
    tempa1->setText("Temperatura: ");
    tempa1->setStyleSheet("font-size:20px;");
    tempValuea1 = new QLabel(tab1);
    tempValuea1->setGeometry(570,200,300,40);
    tempValuea1->setStyleSheet("font-size:20px;");
    oxygena1 = new QLabel(tab1);
    oxygena1->setGeometry(20,260,300,40);
    oxygena1->setText("Poziom tlenu: ");
    oxygena1->setStyleSheet("font-size:20px;");
    oxygenValuea1 = new QLabel(tab1);
    oxygenValuea1->setGeometry(150,260,300,40);
    oxygenValuea1->setStyleSheet("font-size:20px;");

    titlea2 = new QLabel(tab2);
    titlea2->setGeometry(20,20,680,30);
    titlea2->setText("Obecne parametry astronauty: Astronauta 2");
    titlea2->setStyleSheet("font-size:20px;");
    titlea2->setAlignment(Qt::AlignCenter);
    statea2 = new QLabel(tab2);
    statea2->setGeometry(20,80,300,40);
    statea2->setText("Stan: ");
    statea2->setStyleSheet("font-size:20px;");
    stateValuea2 = new QLabel(tab2);
    stateValuea2->setGeometry(150,80,300,40);
    stateValuea2->setStyleSheet("font-size:20px;");
    pulsea2 = new QLabel(tab2);
    pulsea2->setGeometry(20,140,300,40);
    pulsea2->setText("Puls: ");
    pulsea2->setStyleSheet("font-size:20px;");
    pulseValuea2 = new QLabel(tab2);
    pulseValuea2->setGeometry(150,140,300,40);
    pulseValuea2->setStyleSheet("font-size:20px;");
    spacesuita2 = new QLabel(tab2);
    spacesuita2->setGeometry(20,200,300,40);
    spacesuita2->setText("Skafander: ");
    spacesuita2->setStyleSheet("font-size:20px;");
    spacesuitValuea2 = new QLabel(tab2);
    spacesuitValuea2->setGeometry(150,200,300,40);
    spacesuitValuea2->setStyleSheet("font-size:20px;");
    pressure1a2 = new QLabel(tab2);
    pressure1a2->setGeometry(320,80,300,40);
    pressure1a2->setText("Ciśnienie skurczowe: ");
    pressure1a2->setStyleSheet("font-size:20px;");
    pressure1Valuea2 = new QLabel(tab2);
    pressure1Valuea2->setGeometry(570,80,300,40);
    pressure1Valuea2->setStyleSheet("font-size:20px;");
    pressure2a2 = new QLabel(tab2);
    pressure2a2->setGeometry(320,140,300,40);
    pressure2a2->setText("Ciśnienie rozkurczowe: ");
    pressure2a2->setStyleSheet("font-size:20px;");
    pressure2Valuea2 = new QLabel(tab2);
    pressure2Valuea2->setGeometry(570,140,300,40);
    pressure2Valuea2->setStyleSheet("font-size:20px;");
    tempa2 = new QLabel(tab2);
    tempa2->setGeometry(320,200,300,40);
    tempa2->setText("Temperatura: ");
    tempa2->setStyleSheet("font-size:20px;");
    tempValuea2 = new QLabel(tab2);
    tempValuea2->setGeometry(570,200,300,40);
    tempValuea2->setStyleSheet("font-size:20px;");
    oxygena2 = new QLabel(tab2);
    oxygena2->setGeometry(20,260,300,40);
    oxygena2->setText("Poziom tlenu: ");
    oxygena2->setStyleSheet("font-size:20px;");
    oxygenValuea2 = new QLabel(tab2);
    oxygenValuea2->setGeometry(150,260,300,40);
    oxygenValuea2->setStyleSheet("font-size:20px;");

    titlea3 = new QLabel(tab3);
    titlea3->setGeometry(20,20,680,30);
    titlea3->setText("Obecne parametry astronauty: Astronauta 3");
    titlea3->setStyleSheet("font-size:20px;");
    titlea3->setAlignment(Qt::AlignCenter);
    statea3 = new QLabel(tab3);
    statea3->setGeometry(20,80,300,40);
    statea3->setText("Stan: ");
    statea3->setStyleSheet("font-size:20px;");
    stateValuea3 = new QLabel(tab3);
    stateValuea3->setGeometry(150,80,300,40);
    stateValuea3->setStyleSheet("font-size:20px;");
    pulsea3 = new QLabel(tab3);
    pulsea3->setGeometry(20,140,300,40);
    pulsea3->setText("Puls: ");
    pulsea3->setStyleSheet("font-size:20px;");
    pulseValuea3 = new QLabel(tab3);
    pulseValuea3->setGeometry(150,140,300,40);
    pulseValuea3->setStyleSheet("font-size:20px;");
    spacesuita3 = new QLabel(tab3);
    spacesuita3->setGeometry(20,200,300,40);
    spacesuita3->setText("Skafander: ");
    spacesuita3->setStyleSheet("font-size:20px;");
    spacesuitValuea3 = new QLabel(tab3);
    spacesuitValuea3->setGeometry(150,200,300,40);
    spacesuitValuea3->setStyleSheet("font-size:20px;");
    pressure1a3 = new QLabel(tab3);
    pressure1a3->setGeometry(320,80,300,40);
    pressure1a3->setText("Ciśnienie skurczowe: ");
    pressure1a3->setStyleSheet("font-size:20px;");
    pressure1Valuea3 = new QLabel(tab3);
    pressure1Valuea3->setGeometry(570,80,300,40);
    pressure1Valuea3->setStyleSheet("font-size:20px;");
    pressure2a3 = new QLabel(tab3);
    pressure2a3->setGeometry(320,140,300,40);
    pressure2a3->setText("Ciśnienie rozkurczowe: ");
    pressure2a3->setStyleSheet("font-size:20px;");
    pressure2Valuea3 = new QLabel(tab3);
    pressure2Valuea3->setGeometry(570,140,300,40);
    pressure2Valuea3->setStyleSheet("font-size:20px;");
    tempa3 = new QLabel(tab3);
    tempa3->setGeometry(320,200,300,40);
    tempa3->setText("Temperatura: ");
    tempa3->setStyleSheet("font-size:20px;");
    tempValuea3 = new QLabel(tab3);
    tempValuea3->setGeometry(570,200,300,40);
    tempValuea3->setStyleSheet("font-size:20px;");
    oxygena3 = new QLabel(tab3);
    oxygena3->setGeometry(20,260,300,40);
    oxygena3->setText("Poziom tlenu: ");
    oxygena3->setStyleSheet("font-size:20px;");
    oxygenValuea3 = new QLabel(tab3);
    oxygenValuea3->setGeometry(150,260,300,40);
    oxygenValuea3->setStyleSheet("font-size:20px;");

    titlea4 = new QLabel(tab4);
    titlea4->setGeometry(20,20,680,30);
    titlea4->setText("Obecne parametry astronauty: Astronauta 4");
    titlea4->setStyleSheet("font-size:20px;");
    titlea4->setAlignment(Qt::AlignCenter);
    statea4 = new QLabel(tab4);
    statea4->setGeometry(20,80,300,40);
    statea4->setText("Stan: ");
    statea4->setStyleSheet("font-size:20px;");
    stateValuea4 = new QLabel(tab4);
    stateValuea4->setGeometry(150,80,300,40);
    stateValuea4->setStyleSheet("font-size:20px;");
    pulsea4 = new QLabel(tab4);
    pulsea4->setGeometry(20,140,300,40);
    pulsea4->setText("Puls: ");
    pulsea4->setStyleSheet("font-size:20px;");
    pulseValuea4 = new QLabel(tab4);
    pulseValuea4->setGeometry(150,140,300,40);
    pulseValuea4->setStyleSheet("font-size:20px;");
    spacesuita4 = new QLabel(tab4);
    spacesuita4->setGeometry(20,200,300,40);
    spacesuita4->setText("Skafander: ");
    spacesuita4->setStyleSheet("font-size:20px;");
    spacesuitValuea4 = new QLabel(tab4);
    spacesuitValuea4->setGeometry(150,200,300,40);
    spacesuitValuea4->setStyleSheet("font-size:20px;");
    pressure1a4 = new QLabel(tab4);
    pressure1a4->setGeometry(320,80,300,40);
    pressure1a4->setText("Ciśnienie skurczowe: ");
    pressure1a4->setStyleSheet("font-size:20px;");
    pressure1Valuea4 = new QLabel(tab4);
    pressure1Valuea4->setGeometry(570,80,300,40);
    pressure1Valuea4->setStyleSheet("font-size:20px;");
    pressure2a4 = new QLabel(tab4);
    pressure2a4->setGeometry(320,140,300,40);
    pressure2a4->setText("Ciśnienie rozkurczowe: ");
    pressure2a4->setStyleSheet("font-size:20px;");
    pressure2Valuea4 = new QLabel(tab4);
    pressure2Valuea4->setGeometry(570,140,300,40);
    pressure2Valuea4->setStyleSheet("font-size:20px;");
    tempa4 = new QLabel(tab4);
    tempa4->setGeometry(320,200,300,40);
    tempa4->setText("Temperatura: ");
    tempa4->setStyleSheet("font-size:20px;");
    tempValuea4 = new QLabel(tab4);
    tempValuea4->setGeometry(570,200,300,40);
    tempValuea4->setStyleSheet("font-size:20px;");
    oxygena4 = new QLabel(tab4);
    oxygena4->setGeometry(20,260,300,40);
    oxygena4->setText("Poziom tlenu: ");
    oxygena4->setStyleSheet("font-size:20px;");
    oxygenValuea4 = new QLabel(tab4);
    oxygenValuea4->setGeometry(150,260,300,40);
    oxygenValuea4->setStyleSheet("font-size:20px;");

    //----Zegary----//
    timera1 = new QTimer(this);
    timera1->setInterval(5000);
    timera2 = new QTimer(this);
    timera2->setInterval(5000);
    timera3 = new QTimer(this);
    timera3->setInterval(5000);
    timera4 = new QTimer(this);
    timera4->setInterval(5000);

    timerarea1 = new QTimer(this);
    timerarea1->setInterval(5000);
    timerarea2 = new QTimer(this);
    timerarea2->setInterval(5000);
    timerarea3 = new QTimer(this);
    timerarea3->setInterval(5000);

    send1 = new QPushButton("Potwierdź odbiór od Astronauta 1",this);
    send1->setGeometry(20,540,320,40);
    send1->setStyleSheet("font-size:20px;");
    send1->setEnabled(false);
    send2 = new QPushButton("Potwierdź odbiór od Astronauta 2",this);
    send2->setGeometry(360,540,320,40);
    send2->setStyleSheet("font-size:20px;");
    send2->setEnabled(false);
    send3 = new QPushButton("Potwierdź odbiór od Astronauta 3",this);
    send3->setGeometry(20,610,320,40);
    send3->setStyleSheet("font-size:20px;");
    send3->setEnabled(false);
    send4 = new QPushButton("Potwierdź odbiór od Astronauta 4",this);
    send4->setGeometry(360,610,320,40);
    send4->setStyleSheet("font-size:20px;");
    send4->setEnabled(false);

    interpreterAlert = new CInterpreter(this);
    interpreterState = new CInterpreter(this);
    interpreterBT = new CInterpreterBT(this);
    sender1 = new CSender("192.168.1.219",1338,this);
    sender2 = new CSender("192.168.1.213",1338,this);
    sender3 = new CSender("192.168.1.175",13388,this);
    sender4 = new CSender("192.168.1.213",1338,this);
    receiverAlert = new CReceiver(45454,this);
    receiverState = new CReceiver(45455,this);
    receiverBT = new CReceiver(45456,this);
    tableChanger = new CTableChanger(tableHistory,isScroll,this);
    widgetAbout = nullptr;

    connect(send1,SIGNAL(clicked(bool)),this,SLOT(sendDatagram1()));
    connect(send2,SIGNAL(clicked(bool)),this,SLOT(sendDatagram2()));
    connect(send3,SIGNAL(clicked(bool)),this,SLOT(sendDatagram3()));
    connect(send4,SIGNAL(clicked(bool)),this,SLOT(sendDatagram4()));
    connect(interpreterAlert,SIGNAL(newMessage(QVector<QString>)),this,SLOT(unlockButton(QVector<QString>)));
    connect(receiverAlert,SIGNAL(newMessageArrived(QString)),interpreterAlert,SLOT(sprawdzWiadomosc(QString)));
    connect(receiverState,SIGNAL(newMessageArrived(QString)),interpreterState,SLOT(sprawdzWiadomosc(QString)));
    connect(receiverBT,SIGNAL(newMessageArrived(QString)),interpreterBT,SLOT(sprawdzWiadomosc(QString)));
    connect(interpreterAlert,SIGNAL(newMessage(QVector<QString>)),tableChanger,SLOT(addValue(QVector<QString>)));
    connect(interpreterState,SIGNAL(newMessage(QVector<QString>)),this,SLOT(changeLabel(QVector<QString>)));
    connect(interpreterBT,SIGNAL(newMessage(QVector<QString>)),this,SLOT(addToListView(QVector<QString>)));
    connect(timera1,SIGNAL(timeout()),this,SLOT(timera1TimeOut()));
    connect(timera2,SIGNAL(timeout()),this,SLOT(timera2TimeOut()));
    connect(timera3,SIGNAL(timeout()),this,SLOT(timera3TimeOut()));
    connect(timera4,SIGNAL(timeout()),this,SLOT(timera4TimeOut()));
    connect(timerarea1,SIGNAL(timeout()),this,SLOT(timerarea1TimeOut()));
    connect(timerarea2,SIGNAL(timeout()),this,SLOT(timerarea2TimeOut()));
    connect(timerarea3,SIGNAL(timeout()),this,SLOT(timerarea3TimeOut()));
    connect(buttonHelp,SIGNAL(triggered(bool)),this,SLOT(showAboutProgram()));
    connect(buttonClose,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *)
{
    qApp->quit();
}

void Widget::changeLabel(QVector<QString> message)
{
    if(message[1] == "1")
    {
        if(timera1->isActive() == false)
        {
            timera1->start();
        }
        tabs->setTabIcon(0,QIcon(":/icons/ok"));
        stateValuea1->setText(message[0]);
        pulseValuea1->setText(message[2]);
        if(message[2].split(" ")[0].toInt() < 40 || message[2].split(" ")[0].toInt() > 160)
        {
            pulseValuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            pulseValuea1->setStyleSheet("color:black;font-size:20px;");
        }
        spacesuitValuea1->setText(message[6]);
        if(message[6] == "nieszczelny")
        {
            spacesuitValuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            spacesuitValuea1->setStyleSheet("color:black;font-size:20px;");
        }
        pressure1Valuea1->setText(message[3]);
        if(message[3].split(" ")[0].toInt() < 90 || message[3].split(" ")[0].toInt() > 150)
        {
            pressure1Valuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            pressure1Valuea1->setStyleSheet("color:black;font-size:20px;");
        }
        pressure2Valuea1->setText(message[4]);
        if(message[4].split(" ")[0].toInt() < 60 || message[4].split(" ")[0].toInt() > 100)
        {
            pressure2Valuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            pressure2Valuea1->setStyleSheet("color:black;font-size:20px;");
        }
        tempValuea1->setText(message[5]);
        if(message[5].split(" ")[0].toFloat() < 35.6f || message[5].split(" ")[0].toFloat() > 38)
        {
            tempValuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            tempValuea1->setStyleSheet("color:black;font-size:20px;");
        }
        oxygenValuea1->setText(message[7]);
        if(message[7].split(" ")[0].toFloat() < 30)
        {
            oxygenValuea1->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(0,QIcon(":/icons/a"));
        }
        else
        {
            oxygenValuea1->setStyleSheet("color:black;font-size:20px;");
        }
        stateValuea1->setStyleSheet("color:black;font-size:20px;");
        timera1->start();
    }
    else if(message[1] == "2")
    {
        if(timera2->isActive() == false)
        {
            timera2->start();
        }
        tabs->setTabIcon(1,QIcon(":/icons/ok"));
        stateValuea2->setText(message[0]);
        pulseValuea2->setText(message[2]);
        if(message[2].split(" ")[0].toInt() < 40 || message[2].split(" ")[0].toInt() > 160)
        {
            pulseValuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            pulseValuea2->setStyleSheet("color:black;font-size:20px;");
        }
        spacesuitValuea2->setText(message[6]);
        if(message[6] == "nieszczelny")
        {
            spacesuitValuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            spacesuitValuea2->setStyleSheet("color:black;font-size:20px;");
        }
        pressure1Valuea2->setText(message[3]);
        if(message[3].split(" ")[0].toInt() < 90 || message[3].split(" ")[0].toInt() > 150)
        {
            pressure1Valuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            pressure1Valuea2->setStyleSheet("color:black;font-size:20px;");
        }
        pressure2Valuea2->setText(message[4]);
        if(message[4].split(" ")[0].toInt() < 60 || message[4].split(" ")[0].toInt() > 100)
        {
            pressure2Valuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            pressure2Valuea2->setStyleSheet("color:black;font-size:20px;");
        }
        tempValuea2->setText(message[5]);
        if(message[5].split(" ")[0].toFloat() < 35.6f || message[5].split(" ")[0].toFloat() > 38)
        {
            tempValuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            tempValuea2->setStyleSheet("color:black;font-size:20px;");
        }
        oxygenValuea2->setText(message[7]);
        if(message[7].split(" ")[0].toFloat() < 30)
        {
            oxygenValuea2->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(1,QIcon(":/icons/a"));
        }
        else
        {
            oxygenValuea2->setStyleSheet("color:black;font-size:20px;");
        }
        stateValuea2->setStyleSheet("color:black;font-size:20px;");
        timera2->start();
    }
    else if(message[1] == "3")
    {
        if(timera3->isActive() == false)
        {
            timera3->start();
        }
        tabs->setTabIcon(2,QIcon(":/icons/ok"));
        stateValuea3->setText(message[0]);
        pulseValuea3->setText(message[2]);
        if(message[2].split(" ")[0].toInt() < 40 || message[2].split(" ")[0].toInt() > 160)
        {
            pulseValuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            pulseValuea3->setStyleSheet("color:black;font-size:20px;");
        }
        spacesuitValuea3->setText(message[6]);
        if(message[6] == "nieszczelny")
        {
            spacesuitValuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            spacesuitValuea3->setStyleSheet("color:black;font-size:20px;");
        }
        pressure1Valuea3->setText(message[3]);
        if(message[3].split(" ")[0].toInt() < 90 || message[3].split(" ")[0].toInt() > 150)
        {
            pressure1Valuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            pressure1Valuea3->setStyleSheet("color:black;font-size:20px;");
        }
        pressure2Valuea3->setText(message[4]);
        if(message[4].split(" ")[0].toInt() < 60 || message[4].split(" ")[0].toInt() > 100)
        {
            pressure2Valuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            pressure2Valuea3->setStyleSheet("color:black;font-size:20px;");
        }
        tempValuea3->setText(message[5]);
        if(message[5].split(" ")[0].toFloat() < 35.6f || message[5].split(" ")[0].toFloat() > 38)
        {
            tempValuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            tempValuea3->setStyleSheet("color:black;font-size:20px;");
        }
        oxygenValuea3->setText(message[7]);
        if(message[7].split(" ")[0].toFloat() < 30)
        {
            oxygenValuea3->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(2,QIcon(":/icons/a"));
        }
        else
        {
            oxygenValuea3->setStyleSheet("color:black;font-size:20px;");
        }
        stateValuea3->setStyleSheet("color:black;font-size:20px;");
        timera3->start();
    }
    else if(message[1] == "4")
    {
        if(timera4->isActive() == false)
        {
            timera4->start();
        }
        tabs->setTabIcon(3,QIcon(":/icons/ok"));
        stateValuea4->setText(message[0]);
        pulseValuea4->setText(message[2]);
        if(message[2].split(" ")[0].toInt() < 40 || message[2].split(" ")[0].toInt() > 160)
        {
            pulseValuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            pulseValuea4->setStyleSheet("color:black;font-size:20px;");
        }
        spacesuitValuea4->setText(message[6]);
        if(message[6] == "nieszczelny")
        {
            spacesuitValuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            spacesuitValuea4->setStyleSheet("color:black;font-size:20px;");
        }
        pressure1Valuea4->setText(message[3]);
        if(message[3].split(" ")[0].toInt() < 90 || message[3].split(" ")[0].toInt() > 150)
        {
            pressure1Valuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            pressure1Valuea4->setStyleSheet("color:black;font-size:20px;");
        }
        pressure2Valuea4->setText(message[4]);
        if(message[4].split(" ")[0].toInt() < 60 || message[4].split(" ")[0].toInt() > 100)
        {
            pressure2Valuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            pressure2Valuea4->setStyleSheet("color:black;font-size:20px;");
        }
        tempValuea4->setText(message[5]);
        if(message[5].split(" ")[0].toFloat() < 35.6f || message[5].split(" ")[0].toFloat() > 38)
        {
            tempValuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            tempValuea4->setStyleSheet("color:black;font-size:20px;");
        }
        oxygenValuea4->setText(message[7]);
        if(message[7].split(" ")[0].toFloat() < 30)
        {
            oxygenValuea4->setStyleSheet("color:red;font-size:20px;");
            tabs->setTabIcon(3,QIcon(":/icons/a"));
        }
        else
        {
            oxygenValuea4->setStyleSheet("color:black;font-size:20px;");
        }
        stateValuea4->setStyleSheet("color:black;font-size:20px;");
        timera4->start();
    }
}

void Widget::timera1TimeOut()
{
    stateValuea1->setText("Nie odpowiada");
    stateValuea1->setStyleSheet("color:red;font-size:20px;");
    tabs->setTabIcon(0,QIcon(":/icons/w"));
}

void Widget::timera2TimeOut()
{
    stateValuea2->setText("Nie odpowiada");
    stateValuea2->setStyleSheet("color:red;font-size:20px;");
    tabs->setTabIcon(1,QIcon(":/icons/w"));
}

void Widget::timera3TimeOut()
{
    stateValuea3->setText("Nie odpowiada");
    stateValuea3->setStyleSheet("color:red;font-size:20px;");
    tabs->setTabIcon(2,QIcon(":/icons/w"));
}

void Widget::timera4TimeOut()
{
    stateValuea4->setText("Nie odpowiada");
    stateValuea4->setStyleSheet("color:red;font-size:20px;");
    tabs->setTabIcon(3,QIcon(":/icons/w"));
}

void Widget::timerarea1TimeOut()
{
    listDevices1->clear();
}

void Widget::timerarea2TimeOut()
{
    listDevices2->clear();
}

void Widget::timerarea3TimeOut()
{
    listDevices3->clear();
}


void Widget::sendDatagram1()
{
    sender1->broadcastDatagram();
    send1->setEnabled(false);
}

void Widget::sendDatagram2()
{
    sender2->broadcastDatagram();
    send2->setEnabled(false);
}

void Widget::sendDatagram3()
{
    sender3->broadcastDatagram();
    send3->setEnabled(false);
}

void Widget::sendDatagram4()
{
    sender4->broadcastDatagram();
    send4->setEnabled(false);
}

void Widget::unlockButton(QVector<QString> wiadomosc)
{
    if(wiadomosc[1] == "1")
    {
        send1->setEnabled(true);
    }
    else if(wiadomosc[1] == "2")
    {
        send2->setEnabled(true);
    }
    else if(wiadomosc[1] == "3")
    {
        send3->setEnabled(true);
    }
    else if(wiadomosc[1] == "4")
    {
        send4->setEnabled(true);
    }
}

void Widget::addToListView(QVector<QString> wiadomosc)
{
    if(wiadomosc.count() > 1)
    {
        for(int i = 1; i < wiadomosc.count(); i++)
        {
            if(wiadomosc[i] == "1")
            {
                wiadomosc[i] = "Astronauta 1";
            }
            else if(wiadomosc[i] == "2")
            {
                wiadomosc[i] = "Astronauta 2";
            }
            else if(wiadomosc[i] == "3")
            {
                wiadomosc[i] = "Astronauta 3";
            }
            else if(wiadomosc[i] == "4")
            {
                wiadomosc[i] = "Astronauta 4";
            }
        }
    }
    if(wiadomosc[0] == "1")
    {
        listDevices1->clear();
        wiadomosc.removeAt(0);
        for(QString ciag : wiadomosc)
        {
            timerarea1->start();
            listDevices1->addItem(ciag);
        }
    }
    else if(wiadomosc[0] == "2")
    {
        listDevices2->clear();
        wiadomosc.removeAt(0);
        for(QString ciag : wiadomosc)
        {
            timerarea2->start();
            listDevices2->addItem(ciag);
        }
    }
    else if(wiadomosc[0] == "3")
    {
        listDevices3->clear();
        wiadomosc.removeAt(0);
        for(QString ciag : wiadomosc)
        {
            timerarea3->start();
            listDevices3->addItem(ciag);
        }
    }
}
void Widget::changeButton()
{
    isScroll->setChecked(false);
}

void Widget::showAboutProgram()
{
    if(widgetAbout == nullptr) //Jeżli okna nie ma stwórz je
    {
        widgetAbout = new WidgetAbout();
    }
    else
    {
        widgetAbout->showWindow();
    }

}
