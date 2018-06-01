#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>

namespace Ui {
class MainWin;
}

class MenuStart;

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0, MenuStart * win = 0);
    ~MainWin();

private slots:
    void know();
    void do_not_know();
    void end_learn();

private:
    Ui::MainWin *ui;
    MenuStart * win_;
};

#endif // MAINWIN_H
