#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QTextCodec>
#include <QVBoxLayout>


class MainWindow : public QMainWindow
{
Q_OBJECT

private:

    QPushButton *start_learning_button_;
    QPushButton *add_database_button_;
    QPushButton *delete_database_button_;
    QPushButton *exit_button_;
    std::string name_;
    QLabel *label_;
    QVBoxLayout *layout_;

    void createMenus();
    void createStatusBar();
private slots:


public:
    MainWindow();

};

#endif // MAINWINDOW_HPP
