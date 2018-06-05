#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include "repetition.h"
#include<QMessageBox>
#include <QPixmap>


namespace Ui {
class MainWin;
}

class MenuStart;
/*!
 * \brief Główne okno programu
 */
class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0, MenuStart * win = 0);
    ~MainWin();
    void setRepetition(QString name);
    void showElement();
    int getState();
    int showMessageWindow(QString info_text);
    void doChoosenAction(int action);
    void showDetails();

private slots:
    void know();
    void do_not_know();
    void end_learn();
    void check();

private:
    Ui::MainWin *ui;
    MenuStart * win_;
    Repetition* repetition_;
    std::vector<Element>::iterator it_elements_;
};

#endif // MAINWIN_H
