#ifndef GETDATABASENAMEWINDOW_H
#define GETDATABASENAMEWINDOW_H

#include <QDialog>
#include <iostream>
#include "menustart.h"
#include"adddatabasewindow.h"

class AddDatabaseWindow;

namespace Ui {
class GetDatabaseNameWindow;
}
/*!
 * \brief Klasa GetDatabaseNameWindow umożliwia użytkownikowi wpisanie nazwy nowododawanej bazy danych
 */
class GetDatabaseNameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GetDatabaseNameWindow(AddDatabaseWindow* add_data_window,QWidget *parent = 0,MenuStart * menu_start=0);
    ~GetDatabaseNameWindow();
    int showMessageWindow(QString info_text);
    void doChoosenAction(int action);

private slots:
    void save_name();
    void come_back();

private:
    Ui::GetDatabaseNameWindow *ui;
    MenuStart* menu_start_;
    AddDatabaseWindow* add_data_window_;
};


#endif // GETDATABASENAMEWINDOW_H
