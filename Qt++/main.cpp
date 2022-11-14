#include <iostream>
#include <string>

// GUI library
#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QIcon>
#include <QScreen>

using namespace std;
// Print function takes an infinite number of arguments (strings) and prints them to the console separated by a space
void print(string s, ...)
{
    // Create a variable argument list
    va_list args;
    // Initialize the variable argument list
    va_start(args, s);
    // Print the first string
    cout << s;
    // Loop through the rest of the strings
    while (!s.empty())
    {
        // Get the next string (without va_arg)
        s = va_arg(args, char*);
        // Print the string
        cout << " " << s;
    }
    // End the variable argument list
    va_end(args);
    // Print a new line
    cout << endl;
}

QSize GetScreenSize(QApplication &application)
{
    // Get the screen size
    QSize screenSize = QApplication::primaryScreen()->size();
    // Return the screen size
    return screenSize;
}

class MainUI : public QWidget
{
    public:
        MainUI() {
        auto layout = new QGridLayout;
        auto menuBar = new QMenuBar;
        auto fileMenu = new QMenu("File");
        auto editMenu = new QMenu("Edit");
        auto viewMenu = new QMenu("View");
        auto helpMenu = new QMenu("Help");

        menuBar->addMenu(fileMenu);
        menuBar->addMenu(editMenu);
        menuBar->addMenu(viewMenu);
        menuBar->addMenu(helpMenu);

        layout->setMenuBar(menuBar);

        setLayout(layout);
        auto screenSize = GetScreenSize(*qApp);
        auto width = screenSize.width();
        auto height = screenSize.height();
        resize(width / 2, height / 2);

        // Create the widgets
        auto icon = QIcon("/Users/advik/Documents/GitHub/LearningCPP/Qt++/icon.png");
        setWindowIcon(icon);
        setWindowIconText("ToDo List App");
        }


};

int main(int argc, char *argv[])
{
    // Create a Qt application
    QApplication app(argc, argv);
    // Create a main UI
    MainUI mainUI;
    // Show the main UI
    mainUI.show();
    // Run the Qt application
    return QApplication::exec();
}