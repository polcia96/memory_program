#ifndef ADDDATABASEWINDOW_H
#define ADDDATABASEWINDOW_H
#include <QWidget>
#include "adddatabaseobserver.h"
#include "element.h"

class MenuStart;


namespace Ui {
class AddDatabaseWindow;
}

class AddDatabaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddDatabaseWindow(QWidget *parent = 0, MenuStart *menu = 0);
    void notify();
    void writeToFile(std::string file_name);
    ~AddDatabaseWindow();

private slots:
    void save();
    void come_back();

private:
    Element element;
    Ui::AddDatabaseWindow *ui;
    MenuStart * menu;
    AddDatabaseObserver * observer_;

};

#endif // ADDDATABASEWINDOW_H

