#ifndef MESSAGEWINDOW_H
#define MESSAGEWINDOW_H

#include <QDialog>

namespace Ui {
class MessageWindow;
}

class MessageWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MessageWindow(QWidget *parent = 0);
    ~MessageWindow();
    void setText(QString text);
private slots:
    void come_back();
    void exit();

private:
    Ui::MessageWindow *ui;
};

#endif // MESSAGEWINDOW_H
