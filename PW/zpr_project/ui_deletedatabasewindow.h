/********************************************************************************
** Form generated from reading UI file 'deletedatabasewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDATABASEWINDOW_H
#define UI_DELETEDATABASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteDatabaseWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *exit_button;
    QPushButton *save_button;
    QListView *listView;
    QLabel *image_label;

    void setupUi(QDialog *DeleteDatabaseWindow)
    {
        if (DeleteDatabaseWindow->objectName().isEmpty())
            DeleteDatabaseWindow->setObjectName(QStringLiteral("DeleteDatabaseWindow"));
        DeleteDatabaseWindow->resize(545, 379);
        gridLayoutWidget = new QWidget(DeleteDatabaseWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 2, 2));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        exit_button = new QPushButton(DeleteDatabaseWindow);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(430, 330, 91, 31));
        save_button = new QPushButton(DeleteDatabaseWindow);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setGeometry(QRect(430, 290, 91, 31));
        listView = new QListView(DeleteDatabaseWindow);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(100, 20, 261, 341));
        image_label = new QLabel(DeleteDatabaseWindow);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(0, 0, 551, 381));
        image_label->raise();
        gridLayoutWidget->raise();
        exit_button->raise();
        save_button->raise();
        listView->raise();

        retranslateUi(DeleteDatabaseWindow);

        QMetaObject::connectSlotsByName(DeleteDatabaseWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteDatabaseWindow)
    {
        DeleteDatabaseWindow->setWindowTitle(QApplication::translate("DeleteDatabaseWindow", "Usu\305\204 baz\304\231 danych", Q_NULLPTR));
        exit_button->setText(QApplication::translate("DeleteDatabaseWindow", "Wyj\305\233cie", Q_NULLPTR));
        save_button->setText(QApplication::translate("DeleteDatabaseWindow", "OK", Q_NULLPTR));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteDatabaseWindow: public Ui_DeleteDatabaseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDATABASEWINDOW_H
