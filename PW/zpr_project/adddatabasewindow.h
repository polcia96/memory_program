#ifndef ADDDATABASEWINDOW_H
#define ADDDATABASEWINDOW_H
#include <QWidget>
#include <QFileDialog>
#include "adddatabaseobserver.h"
#include "element.h"
#include "menustart.h"


/*!
 * \brief interfejs graficzny
 */
namespace Ui {
/*!
 * \brief AddDatabaseWindow okno które umożliwia użytkownikowi dodanie nowej bazy danych
 */
class AddDatabaseWindow;
}

/*!
 * \brief AddDatabaseWindow okno które umożliwia użytkownikowi dodanie nowej bazy danych
 */
class AddDatabaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddDatabaseWindow(QWidget *parent = 0, MenuStart *menu = 0);
    void notify();
    void writeToFile(std::string file_name);
    ~AddDatabaseWindow();
    bool setDatabaseName(std::string new_name);


private slots:
    void save();
    void come_back();
    void choose_picture();

private:
    Element element;
    Ui::AddDatabaseWindow *ui;
    MenuStart * menu;
    AddDatabaseObserver * observer_;
    std::string database_name_;

};

#endif // ADDDATABASEWINDOW_H

