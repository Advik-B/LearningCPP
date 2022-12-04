#include "QMainWindow"
#include "QMenuBar"
#include "QMenu"
#include "QAction"
#include "QMessageBox"

class Menu : public QMenuBar
{
    public:
        Menu()
        {

            // Currently there is only About, AboutQt menu

            // About action
            auto aboutAction = new QAction("About", this);
            auto aboutQtAction = new QAction("About Qt", this);

            // About menu
            auto aboutMenu = new QMenu("About", this);
            aboutMenu->addAction(aboutAction);
            aboutMenu->addAction(aboutQtAction);

            // Add About menu to menu bar
            addMenu(aboutMenu);
            // Connect About menu actions to slots
            connect(aboutAction, &QAction::triggered, this, &Menu::about);
            connect(aboutQtAction, &QAction::triggered, this, &Menu::aboutQt);


        }

        void about()
        {
            auto msgBox = new QMessageBox();
            msgBox->setText("About");
            msgBox->setInformativeText("This is a simple app that has no purpose.");\
            msgBox->setStandardButtons(QMessageBox::Ok);
            msgBox->resize(400, 350);
            msgBox->exec();

        }

        void aboutQt()
        {
            QMessageBox::aboutQt(this, "About Qt");
        }
};


class MainWindow : public QMainWindow
{
    public:
        MainWindow()
        {
            auto menu = new Menu();

            setMenuBar(menu);
            setWindowTitle("MainUI");
            resize(650, 600);
        };
};
