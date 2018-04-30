#ifndef MENUSTART_H
#define MENUSTART_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpacerItem>
#include <QTextCodec>

#include"mainwindow.h"
#include "adddatabasewindow.h"

class MenuStart : public QWidget
{
    Q_OBJECT
public:
    explicit MenuStart(QWidget *parent = nullptr);
    ~MenuStart();

signals:

private slots:
    void openMainWindow();
    void openAddDatabaseWindow();
    void openDeleteDatabaseWidnow();
    void exit_menu();

private:
    QVBoxLayout *layout;
    QPushButton *start_learning_button_;
    QPushButton *add_database_button_;
    QPushButton *delete_database_button_;
    QPushButton *exit_button_;
    MainWindow *main_window_;
    AddDatabaseWindow * add_database_window_;


};

#endif // MENUSTART_H
