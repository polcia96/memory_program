/********************************************************************************
** Form generated from reading UI file 'adddatabasewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATABASEWINDOW_H
#define UI_ADDDATABASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDatabaseWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *choose_picture_button;
    QLabel *image_label;

    void setupUi(QWidget *AddDatabaseWindow)
    {
        if (AddDatabaseWindow->objectName().isEmpty())
            AddDatabaseWindow->setObjectName(QStringLiteral("AddDatabaseWindow"));
        AddDatabaseWindow->resize(545, 379);
        verticalLayoutWidget = new QWidget(AddDatabaseWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 290, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(AddDatabaseWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 40, 111, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(AddDatabaseWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 40, 71, 16));
        label_2->setFont(font);
        lineEdit = new QLineEdit(AddDatabaseWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 70, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(AddDatabaseWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 70, 141, 31));
        lineEdit_2->setFont(font1);
        plainTextEdit = new QPlainTextEdit(AddDatabaseWindow);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 170, 141, 101));
        plainTextEdit->setFont(font);
        label_3 = new QLabel(AddDatabaseWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 130, 111, 16));
        label_3->setFont(font);
        label_4 = new QLabel(AddDatabaseWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 130, 71, 16));
        label_4->setFont(font);
        choose_picture_button = new QPushButton(AddDatabaseWindow);
        choose_picture_button->setObjectName(QStringLiteral("choose_picture_button"));
        choose_picture_button->setGeometry(QRect(360, 170, 141, 41));
        image_label = new QLabel(AddDatabaseWindow);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(-4, 2, 551, 381));
        image_label->raise();
        verticalLayoutWidget->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        plainTextEdit->raise();
        label_3->raise();
        label_4->raise();
        choose_picture_button->raise();

        retranslateUi(AddDatabaseWindow);

        QMetaObject::connectSlotsByName(AddDatabaseWindow);
    } // setupUi

    void retranslateUi(QWidget *AddDatabaseWindow)
    {
        AddDatabaseWindow->setWindowTitle(QApplication::translate("AddDatabaseWindow", "Dodaj Baz\304\231", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddDatabaseWindow", "ZAPISZ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddDatabaseWindow", "WYJD\305\271", Q_NULLPTR));
        label->setText(QApplication::translate("AddDatabaseWindow", "T\305\201UMACZNIE", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddDatabaseWindow", "S\305\201OWO", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddDatabaseWindow", "ZDJ\304\230CIE", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddDatabaseWindow", "OPIS", Q_NULLPTR));
        choose_picture_button->setText(QApplication::translate("AddDatabaseWindow", "Wybierz obrazek", Q_NULLPTR));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddDatabaseWindow: public Ui_AddDatabaseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATABASEWINDOW_H
