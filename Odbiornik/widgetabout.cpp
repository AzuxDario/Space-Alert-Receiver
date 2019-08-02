#include "widgetabout.h"
#include "ui_widgetabout.h"

WidgetAbout::WidgetAbout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetAbout)
{
    ui->setupUi(this);
    content = "Space Alert Receiver version: 0.7.gamma.inDevelopment\nThis program was made on Rzethon 2016 with Qt 5.7.";

    //--------Inicjalizacja okna--------//
    setWindowTitle(QString::fromUtf8("O programie"));
    setWindowIcon(QIcon(":/ikona/ikona"));
    setMaximumSize(500,210);
    setMinimumSize(500,210);
    //setWindowModality(Qt::ApplicationModal); //Sprawia że po aktywacji okna główne okno staje się nieklikalne

    //--------Okno z tekstem--------//
    textField = new QLabel(content,this);
    textField->setGeometry(148,10,342,128);
    textField->setWordWrap(true);

    //--------Przycisk--------//
    okButton = new QPushButton("Ok",this);
    okButton->setGeometry(180,170,140,30);

    //--------Obrazek--------//
    imageField = new QLabel(this);
    imageField->setGeometry(10,10,128,128);
    imageField->setPixmap(QPixmap(":/icons/icon"));

    //----Przypisanie przycisków do slotów----//
    connect(okButton,SIGNAL(clicked()),this,SLOT(closeWindow()));

    move(QApplication::desktop()->screen()->rect().center() - this->rect().center()); //Przesunięcie na środek ekranu
    show(); //Zachowaj na końcu konstruktora
}

WidgetAbout::~WidgetAbout()
{
    delete ui;
}

void WidgetAbout::closeWindow()
{
    this->close();
}

void WidgetAbout::showWindow()
{
    if(this->isVisible()) //Jeżeli okno jest widoczne
    {
        this->activateWindow(); //Niech stanie się aktywne
    }
    else //Jeżeli okno było stworzone i nie jest widoczne wywołaj je
    {
        this->move(QApplication::desktop()->screen()->rect().center() - this->rect().center()); //Przesunięcie na środek ekranu
        this->show();
    }
}
