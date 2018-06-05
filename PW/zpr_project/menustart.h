#ifndef MENUSTART_H
#define MENUSTART_H

#include <QDialog>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpacerItem>
#include <QTextCodec>
//#include <variant>
#include"mainwin.h"
#include "adddatabasewindow.h"
#include "deletedatabasewindow.h"
#include "choosedatabasewindow.h"
#include "getdatabasenamewindow.h"

class GetDatabaseNameWindow;
class AddDatabaseWindow;
class MainWin;
class DeleteDatabaseWindow;
class ChooseDatabaseWindow;


namespace Ui {
class MenuStart;
}
/*!
 * \brief Klasa MenuStart reprezentuje okno startowe, umożliwia użytkowi wybranie konkretnych akcji.
 */
class MenuStart : public QDialog
{
    Q_OBJECT

public:
    explicit MenuStart(QWidget *parent = 0);
    ~MenuStart();
    void setDatabaseName(std::string name);

private slots:
    void openMainWindow();
    void openAddDatabaseWindow();
    void openDeleteDatabaseWidnow();
    void openChooseDatabaseWindow();
    void exit_menu();

private:
    Ui::MenuStart *ui;
    MainWin *main_window_;
    AddDatabaseWindow * add_database_window_;
    DeleteDatabaseWindow * delete_database_window_;
    ChooseDatabaseWindow * choose_database_window_;
    GetDatabaseNameWindow* get_database_window_;
    std::string database_name_="";
};

#endif // MENUSTART_H
