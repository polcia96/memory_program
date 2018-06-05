/********************************************************************************
** Form generated from reading UI file 'menustart.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSTART_H
#define UI_MENUSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuStart
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *exit_button_;
    QPushButton *start_learning_button_;
    QPushButton *delete_database_button_;
    QPushButton *add_database_button_;
    QLabel *image_label;

    void setupUi(QDialog *MenuStart)
    {
        if (MenuStart->objectName().isEmpty())
            MenuStart->setObjectName(QStringLiteral("MenuStart"));
        MenuStart->resize(683, 532);
        gridLayoutWidget = new QWidget(MenuStart);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 60, 571, 411));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        exit_button_ = new QPushButton(gridLayoutWidget);
        exit_button_->setObjectName(QStringLiteral("exit_button_"));
        exit_button_->setSizeIncrement(QSize(0, 70));
        QFont font;
        font.setPointSize(16);
        exit_button_->setFont(font);

        gridLayout->addWidget(exit_button_, 3, 0, 1, 1);

        start_learning_button_ = new QPushButton(gridLayoutWidget);
        start_learning_button_->setObjectName(QStringLiteral("start_learning_button_"));
        start_learning_button_->setSizeIncrement(QSize(0, 70));
        start_learning_button_->setFont(font);

        gridLayout->addWidget(start_learning_button_, 0, 0, 1, 1);

        delete_database_button_ = new QPushButton(gridLayoutWidget);
        delete_database_button_->setObjectName(QStringLiteral("delete_database_button_"));
        delete_database_button_->setSizeIncrement(QSize(0, 70));
        delete_database_button_->setFont(font);

        gridLayout->addWidget(delete_database_button_, 2, 0, 1, 1);

        add_database_button_ = new QPushButton(gridLayoutWidget);
        add_database_button_->setObjectName(QStringLiteral("add_database_button_"));
        add_database_button_->setSizeIncrement(QSize(0, 70));
        add_database_button_->setFont(font);

        gridLayout->addWidget(add_database_button_, 1, 0, 1, 1);

        image_label = new QLabel(MenuStart);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(0, 0, 681, 531));
        image_label->raise();
        gridLayoutWidget->raise();

        retranslateUi(MenuStart);

        QMetaObject::connectSlotsByName(MenuStart);
    } // setupUi

    void retranslateUi(QDialog *MenuStart)
    {
        MenuStart->setWindowTitle(QApplication::translate("MenuStart", "Dialog", Q_NULLPTR));
        exit_button_->setText(QApplication::translate("MenuStart", "Wyj\305\233cie", Q_NULLPTR));
        start_learning_button_->setText(QApplication::translate("MenuStart", "Rozpocznij nauk\304\231", Q_NULLPTR));
        delete_database_button_->setText(QApplication::translate("MenuStart", "Usu\305\204 baz\304\231", Q_NULLPTR));
        add_database_button_->setText(QApplication::translate("MenuStart", "Dodaj baz\304\231", Q_NULLPTR));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MenuStart: public Ui_MenuStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSTART_H
