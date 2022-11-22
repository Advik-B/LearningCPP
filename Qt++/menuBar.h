#include "QMenuBar"
#include "QMenu"
#include "QAction"

class [[maybe_unused]] MenuBar : public QMenuBar
{
    public:
        MenuBar()
        {
            auto fileMenu = new QMenu("File");
            auto editMenu = new QMenu("Edit");
            auto helpMenu = new QMenu("Help");

            auto newAction = new QAction("New", this);
            auto openAction = new QAction("Open", this);
            auto saveAction = new QAction("Save", this);
            auto exitAction = new QAction("Exit", this);

            fileMenu->addAction(newAction);
            fileMenu->addAction(openAction);
            fileMenu->addAction(saveAction);
            fileMenu->addSeparator();
            fileMenu->addAction(exitAction);

            addMenu(fileMenu);
            addMenu(editMenu);
            addMenu(helpMenu);
        }
};
