#ifndef ADDDATABASEWINDOW_H
#define ADDDATABASEWINDOW_H

#include <QWidget>
#include <QInputDialog>
#include <QVBoxLayout>
#include <QDir>
#include "adddatabaseobserver.h"
#include "element.h"

class AddDatabaseWindow : public QWidget
{
    Q_OBJECT
public:
    explicit AddDatabaseWindow(QWidget *parent = nullptr);
    void notify();
    void writeToFile(std::string file_name);

signals:

public slots:

private:
    Element element_;
    QInputDialog * text_edit_;
    QVBoxLayout * layout_;
    QString input_tekst_;
    AddDatabaseObserver * observer_;

};

#endif // ADDDATABASEWINDOW_H
