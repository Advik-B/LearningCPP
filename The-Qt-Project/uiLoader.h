#include "QFile"
#include "QtUiTools/QUiLoader"

class UiLoader : public QUiLoader
{
    public:
        UiLoader(QObject *parent = nullptr) : QUiLoader(parent) {}
        QWidget *loadUi(const QString &fileName, QWidget *parentWidget = nullptr)
        {
            QFile file(fileName);
            file.open(QFile::ReadOnly);
            QWidget *widget = load(&file, parentWidget);
            file.close();
            return widget;
        }
};
