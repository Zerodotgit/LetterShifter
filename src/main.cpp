#include "mainwindow.h"
#include "../include/ui_mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
