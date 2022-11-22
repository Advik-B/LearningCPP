#include <QApplication>
#include "window.h"
#include "io_util.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow UI;
    UI.show();
    util_io::Print("Hello World!");
    util_io::Print(123);
    util_io::FileWrite("test.txt", "Hello World!");
    return QApplication::exec();
}
