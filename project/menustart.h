#ifndef MENUSTART_H
#define MENUSTART_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpacerItem>
#include <QTextCodec>

#include"mainwindow.h"

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
    //QSpacerItem *spacer;
    QPushButton *start_learning_button_;
    QPushButton *add_database_button_;
    QPushButton *delete_database_button_;
    QPushButton *exit_button_;
   // QLabel *label;
   // QLabel *label2;
    MainWindow *main_window_;


};

#endif // MENUSTART_H
