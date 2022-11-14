#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QPixmap>
#include <QSize>

#include <iostream>
#include <string>
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
    void setupUI()
    {
        resize(400, 300);
        auto layout = new QGridLayout(this);
        auto global_title = new QLabel(nullptr);
        auto email = new QLineEdit(nullptr);
        auto password = new QLineEdit(nullptr);
        auto login = new QPushButton("Login", nullptr);
        auto logo = new QLabel(nullptr);
        auto logo_pixmap = new QPixmap("../wood.png");


        password->setEchoMode(QLineEdit::Password);
        password->setPlaceholderText("Password");
        email->setPlaceholderText("Email");
        logo_pixmap->scaled(QSize(100, 100), Qt::KeepAspectRatio);
        logo->setPixmap(*logo_pixmap);
        global_title->hide(); // For now...
        logo->hide(); // For now...
        // Expand the email and password fields to the full width of the window


        layout->addWidget(global_title, 0, 0, 1, 2);
        layout->addWidget(logo, 1, 0, 1, 2);
        layout->addWidget(email, 2, 0, 1, 2);
        layout->addWidget(password, 3, 0, 1, 2);
        layout->addWidget(login, 4, 0, 1, 2);

        // Set the layout
        setLayout(layout);

        setWindowTitle("Todo App");
        // Set the content margins
        layout->setContentsMargins(10, 10, 10, 10);
        global_title->setText("Login to continue");
        global_title->show();
        logo->resize(32, 32);
        logo_pixmap->scaled(QSize(32, 32), Qt::KeepAspectRatio);
        logo->setPixmap(*logo_pixmap);
        logo->show();
        show();
    }

};


int main(int argc, char *argv[]) {
    print("Qt App is starting...");
    QApplication a(argc, argv);
    MainUI w;
    w.setupUI();
    return QApplication::exec();
}

