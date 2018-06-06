#ifndef CHOOSEDATABASEWINDOW_H
#define CHOOSEDATABASEWINDOW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <vector>

#include "mainwin.h"
#include "databaseslist.h"
#include "menustart.h"


namespace Ui {
class ChooseDatabaseWindow;
}
/*!
 * \brief okno umożliwiające użytkownikowi wybór bazy danych do powtórki
 */
class ChooseDatabaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseDatabaseWindow(QWidget *parent = 0, MenuStart *menu_start_ = 0, MainWin* main_window_=0);
    ~ChooseDatabaseWindow();
    void showDatabasesList();
    int showMessageWindow(QString info_text);

private slots:
    void save();
    void come_back();


private:
    Ui::ChooseDatabaseWindow *ui;
    QString database_name_;
    MenuStart* menu_start_;
    QItemSelectionModel* select_model_;
    QStandardItemModel* model_;
    MainWin* main_window_;

};

#endif // CHOOSEDATABASEWINDOW_H
