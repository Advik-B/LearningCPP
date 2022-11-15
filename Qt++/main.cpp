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
#include <QMessageBox>

using namespace std;


QSize GetScreenSize()
{
    // Get the screen size
    QSize screenSize = QApplication::primaryScreen()->size();
    // Return the screen size
    return screenSize;
}

template <typename str>
void print(str &text, char end = '\n', bool newLine = true, bool flush = false)
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
void print(const basic_string<char, char_traits<char>, allocator<char>>& text, char end = '\n', bool newLine = true, bool flush = false)
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
void print(int text, char end = '\n', bool newLine = true, bool flush = false)
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
void print(bool text, char end = '\n', bool newLine = true, bool flush = false)
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
void print(string &text, char end = '\n', bool newLine = true, bool flush = false)
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

        // Actions
        // File -> New_Todo
        auto newTodoAction = new QAction("New Todo");
        auto submitBugAction = new QAction("Submit a bug");
        auto submitFeatureAction = new QAction("Suggest a feature");
        auto aboutAction = new QAction("About");
        auto exitAction = new QAction("Exit");


        newTodoAction->setIcon(QIcon("icons/new.png"));
        submitBugAction->setIcon(QIcon("icons/bug.png"));
        submitFeatureAction->setIcon(QIcon("icons/feature.png"));
        aboutAction->setIcon(QIcon("icons/about.png"));
        exitAction->setIcon(QIcon("icons/exit.png"));

        aboutAction->setShortcut(QKeySequence::HelpContents);
        exitAction->setShortcut(QKeySequence::Quit);

        // Trigger the about action
        connect(aboutAction, &QAction::triggered, this, &MainUI::about);
        connect(submitBugAction, &QAction::triggered, this, &MainUI::about);

        fileMenu->addAction(newTodoAction);
        helpMenu->addAction(submitBugAction);
        helpMenu->addAction(submitFeatureAction);
        helpMenu->addAction(aboutAction);
        fileMenu->addAction(exitAction);

        layout->setMenuBar(menuBar);

        setLayout(layout);
        auto screenSize = GetScreenSize();
        auto width = screenSize.width();
        auto height = screenSize.height();
        int divider { 2 };
        print("Screen size: " + to_string(width) + "x" + to_string(height));
        print("Window size: " + to_string(width / divider) + "x" + to_string(height / divider));
        resize(width / divider, height / divider);

//        auto icon = QIcon("~/Documents/GitHub/LearningCPP/Qt++/icon.png");
//        setWindowIcon(icon);
        setWindowTitle("ToDo App");
        setFixedSize(size());
        }
        static void about()
        {
            auto about = new QMessageBox;
            about->setWindowTitle("About");
            about->setText("This is a simple ToDo app made with Qt");
            about->setStandardButtons(QMessageBox::Ok);
            about->exec();
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