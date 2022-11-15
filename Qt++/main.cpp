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
#include <QLabel>
#include <QPixmap>
#include <QtGui>

using namespace std;


QSize GetScreenSize(QApplication &application)
{
    // Get the screen size
    QSize screenSize = QApplication::primaryScreen()->size();
    // Return the screen size
    return screenSize;
}

template <typename str>
void print(str &text, char end = ' ', bool newLine = true, bool flush = false)
{
    // Print the text
    cout << text;
    // Check if a new line is needed
    if (newLine)
    {
        // Print a new line
        cout << end;
    }
    // Check if the buffer should be flushed
    if (flush)
    {
        // Flush the buffer
        cout.flush();
    }
}
void print(char *text, char end = ' ', bool newLine = true, bool flush = false)
{
    // Print the text
    cout << text;
    // Check if a new line is needed
    if (newLine)
    {
        // Print a new line
        cout << end;
    }
    // Check if the buffer should be flushed
    if (flush)
    {
        // Flush the buffer
        cout.flush();
    }
}
void print(int text, char end = ' ', bool newLine = true, bool flush = false)
{
    // Print the text
    cout << text;
    // Check if a new line is needed
    if (newLine)
    {
        // Print a new line
        cout << end;
    }
    // Check if the buffer should be flushed
    if (flush)
    {
        // Flush the buffer
        cout.flush();
    }
}
void print(bool text, char end = ' ', bool newLine = true, bool flush = false)
{
    // Print the text
    cout << boolalpha;
    cout << text;
    cout << noboolalpha;
    // Check if a new line is needed
    if (newLine)
    {
        // Print a new line
        cout << end;
    }
    // Check if the buffer should be flushed
    if (flush)
    {
        // Flush the buffer
        cout.flush();
    }
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

//        auto icon = QIcon("~/Documents/GitHub/LearningCPP/Qt++/icon.png");
//        setWindowIcon(icon);
        setWindowIconText("ToDo List App");
        print(1);
        }


};

int main(int argc, char *argv[])
{
    QImageReader::setAllocationLimit(0);
    // Create a Qt application
    QApplication app(argc, argv);
    // Create a main UI
    MainUI mainUI;
    // Show the main UI
    mainUI.show();
    // Run the Qt application
    return QApplication::exec();
}