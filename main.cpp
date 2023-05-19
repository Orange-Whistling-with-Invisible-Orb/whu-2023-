#include "widget_start.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start_Widget w;
    w.show();
    return a.exec();
}
