#ifndef WIDGETABOUT_H
#define WIDGETABOUT_H

#include <QWidget>
#include <QTextCodec>
#include <QLabel>
#include <QPushButton>
#include <QDesktopWidget>

namespace Ui {
    class WidgetAbout;
}

class WidgetAbout : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetAbout(QWidget *parent = nullptr);
    ~WidgetAbout();

private:
    Ui::WidgetAbout *ui;

    //--------Przyciski--------//
    QPushButton *okButton;

    //--------Pola tekstowe--------//
    QLabel *textField;

    //--------Obrazek--------//
    QLabel *imageField
    ;
    //----Zmienne przechuwyjące ciągi znaków----//
    QString content;

private slots:
    void closeWindow(); //Zamyka okno

public slots:
    void showWindow(); //Pokazuje już utworzone okno
};

#endif // WIDGETABOUT_H
