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
#include <QFontComboBox>
#include <QtGui>
#include <QMessageBox>
#include <QSpinBox>

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
        setLayout(layout);
        auto screenSize = GetScreenSize();
        auto width = screenSize.width();
        auto height = screenSize.height();
        int divider { 2 };
        print("Screen size: " + to_string(width) + "x" + to_string(height));
        print("Window size: " + to_string(width / divider) + "x" + to_string(height / divider));
        resize(width / divider, height / divider);

        setWindowTitle("ToDo App");
        auto menuBar = new QMenuBar;
        auto fileMenu = new QMenu("File");
        auto editMenu = new QMenu("Edit");
        auto helpMenu = new QMenu("Help");
        auto viewMenu = new QMenu("View");

        auto newAction = new QAction("New");
        auto openAction = new QAction("Open");
        auto saveAction = new QAction("Save");
        auto saveAsAction = new QAction("Save As");
        auto exitAction = new QAction("Exit");

        fileMenu->addAction(newAction);
        fileMenu->addAction(openAction);
        fileMenu->addAction(saveAction);
        fileMenu->addAction(saveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(exitAction);

        auto undoAction = new QAction("Undo");
        auto redoAction = new QAction("Redo");
        auto cutAction = new QAction("Cut");
        auto copyAction = new QAction("Copy");
        auto pasteAction = new QAction("Paste");
        auto deleteAction = new QAction("Delete");
        auto selectAllAction = new QAction("Select All");

        editMenu->addAction(undoAction);
        editMenu->addAction(redoAction);
        editMenu->addSeparator();
        editMenu->addAction(cutAction);
        editMenu->addAction(copyAction);
        editMenu->addAction(pasteAction);
        editMenu->addAction(deleteAction);
        editMenu->addSeparator();
        editMenu->addAction(selectAllAction);

        auto aboutAction = new QAction("About");
        auto aboutQtAction = new QAction("About Qt");

        helpMenu->addAction(aboutAction);
        helpMenu->addAction(aboutQtAction);

        auto fullScreenAction = new QAction("Full Screen");
        auto minimizeAction = new QAction("Minimize");
        auto maximizeAction = new QAction("Maximize");
        auto setFontSizeAction = new QAction("Set Font Size");

        viewMenu->addAction(fullScreenAction);
        viewMenu->addAction(minimizeAction);
        viewMenu->addAction(maximizeAction);
        viewMenu->addSeparator();
        viewMenu->addAction(setFontSizeAction);


        menuBar->addMenu(fileMenu);
        menuBar->addMenu(editMenu);
        menuBar->addMenu(helpMenu);
        menuBar->addMenu(viewMenu);

        setFixedSize(size());
        connect(exitAction, &QAction::triggered, this, &QWidget::close);
        connect(aboutQtAction, &QAction::triggered, this, &MainUI::aboutQt_);
        connect(aboutAction, &QAction::triggered, this, &MainUI::about);
//        connect(fullScreenAction, &QAction::triggered, this, &MainUI::fullScreen_);
//        connect(minimizeAction, &QAction::triggered, this, &MainUI::minimize_);
//        connect(maximizeAction, &QAction::triggered, this, &MainUI::maximize_);
        connect(setFontSizeAction, &QAction::triggered, this, &MainUI::setFontSize);


        }
        static void about()
        {
            auto about = new QMessageBox;
            about->setWindowTitle("About");
            about->setText("This is a simple ToDo app made with Qt");
            about->setStandardButtons(QMessageBox::Ok);
            about->exec();
        }

        static void aboutQt_()
        {
            QMessageBox().aboutQt(nullptr, "About Qt");
        }

        static void setFontSize()
        {
            auto fontSize = new QMessageBox;
            fontSize->setWindowTitle("Set Font Size");
            auto fontComboBox = new QFontComboBox(nullptr);
            auto fontSpinBox = new QSpinBox(nullptr);
            fontSpinBox->setRange(1, 100);

            fontSize->layout()->addItem(reinterpret_cast<QLayoutItem *>(fontComboBox));
            fontSize->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
            fontSize->exec();
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