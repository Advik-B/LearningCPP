#include <QApplication>
#include "window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow UI;
    UI.show();
    return QApplication::exec();
}
