#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    qApp->setStyleSheet(
//                        "QMessageBox { background-color: #2E2E2E; }"
//                     );
    MainWindow w;
    w.show();
    return a.exec();
}




