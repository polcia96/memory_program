/********************************************************************************
** Form generated from reading UI file 'getdatabasenamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETDATABASENAMEWINDOW_H
#define UI_GETDATABASENAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GetDatabaseNameWindow
{
public:
    QLineEdit *lineEdit;
    QLabel *title_label;
    QLabel *info_label;
    QPushButton *add_button;
    QPushButton *come_back_button;

    void setupUi(QDialog *GetDatabaseNameWindow)
    {
        if (GetDatabaseNameWindow->objectName().isEmpty())
            GetDatabaseNameWindow->setObjectName(QStringLiteral("GetDatabaseNameWindow"));
        GetDatabaseNameWindow->resize(400, 300);
        lineEdit = new QLineEdit(GetDatabaseNameWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 130, 301, 61));
        title_label = new QLabel(GetDatabaseNameWindow);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(50, 40, 301, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        title_label->setFont(font);
        info_label = new QLabel(GetDatabaseNameWindow);
        info_label->setObjectName(QStringLiteral("info_label"));
        info_label->setGeometry(QRect(40, 80, 311, 31));
        add_button = new QPushButton(GetDatabaseNameWindow);
        add_button->setObjectName(QStringLiteral("add_button"));
        add_button->setGeometry(QRect(40, 220, 131, 41));
        come_back_button = new QPushButton(GetDatabaseNameWindow);
        come_back_button->setObjectName(QStringLiteral("come_back_button"));
        come_back_button->setGeometry(QRect(210, 220, 131, 41));

        retranslateUi(GetDatabaseNameWindow);

        QMetaObject::connectSlotsByName(GetDatabaseNameWindow);
    } // setupUi

    void retranslateUi(QDialog *GetDatabaseNameWindow)
    {
        GetDatabaseNameWindow->setWindowTitle(QApplication::translate("GetDatabaseNameWindow", "Dialog", Q_NULLPTR));
        title_label->setText(QApplication::translate("GetDatabaseNameWindow", "Wpisz nazw\304\231 nowej bazy ", Q_NULLPTR));
        info_label->setText(QApplication::translate("GetDatabaseNameWindow", "Pami\304\231taj, \305\274e nazwa musi by\304\207 inna, od nazw ju\305\274 istniej\304\205cych baz", Q_NULLPTR));
        add_button->setText(QApplication::translate("GetDatabaseNameWindow", "Dodaj", Q_NULLPTR));
        come_back_button->setText(QApplication::translate("GetDatabaseNameWindow", "Powr\303\263t", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GetDatabaseNameWindow: public Ui_GetDatabaseNameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETDATABASENAMEWINDOW_H
