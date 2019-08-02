//Rzethon 10.12.2016 - 11.12.2016
//Program stworzony na Rzethonie
//Jest to odbiornik odbierający i przetwarzacjący sygnały z telefonów, które są w posiadaniu astronautów
//Wyświetla on ich parametry życiowe oraz wiadomości, które mogą wysyłać z aplikacji mobilnej

#include "widget.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    Widget w;
    w.setWindowIcon(QIcon(":/icons/icon"));
    w.setWindowTitle(QString::fromUtf8("Space Alert Receiver version: 0.7.gamma.inDevelopment"));
    w.setMaximumSize(1700,700);
    w.setMinimumSize(1700,700);
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    w.show();

    return a.exec();
}
