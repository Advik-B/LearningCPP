#include "QApplication"
#include "QMainWindow"

#include "menuBar.h"

class MainUI : public QMainWindow
{
    public:
        MainUI()
        {
            setWindowTitle("Main Application");
            resize(400, 300);

            auto menuBar = new MenuBar();
            setMenuBar(menuBar);
        }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainUI UI;
    UI.show();
    return QApplication::exec();
}