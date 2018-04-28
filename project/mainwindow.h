#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QTextCodec>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
Q_OBJECT

private:

    QMenu *menu_;
    QAction *quit_;
    QAction *add_database_;
    QAction *delete_database_;
    std::string name_;
    QLabel *label_;
    QHBoxLayout *layout_;

    void createMenus();
    void createStatusBar();
private slots:
   // void foo();

public:
    MainWindow(std::string);

};

#endif // MAINWINDOW_HPP
