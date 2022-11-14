#include <iostream>
#include <string>

// GUI library
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QFontDatabase>
#include <QFormLayout>

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

class MainUI : public QWidget
{
    public:
        MainUI() {
        // Set the window title
        setWindowTitle("Main UI");
        // Set the window size
        resize(400, 300);
        // Create a label
        QLabel *label = new QLabel("Hello World!");
        // Create a font
        QFont font;
        // Set the font family
        font.setFamily("Arial");
        // Set the font size
        font.setPointSize(24);
        // Set the font weight
        font.setWeight(QFont::Bold);
        // Set the font style
        font.setStyle(QFont::StyleItalic);
        // Set the font
        label->setFont(font);
        // Create a form layout
        auto *layout = new QFormLayout;
        // Add the label to the layout
        layout->addRow(label);
        // Set the layout
        setLayout(layout);
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