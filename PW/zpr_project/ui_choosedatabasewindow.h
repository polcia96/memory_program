/********************************************************************************
** Form generated from reading UI file 'choosedatabasewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDATABASEWINDOW_H
#define UI_CHOOSEDATABASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseDatabaseWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *exit_button;
    QPushButton *save_button;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListView *listView;
    QSlider *verticalSlider;
    QScrollBar *verticalScrollBar;
    QLabel *image_label;

    void setupUi(QWidget *ChooseDatabaseWindow)
    {
        if (ChooseDatabaseWindow->objectName().isEmpty())
            ChooseDatabaseWindow->setObjectName(QStringLiteral("ChooseDatabaseWindow"));
        ChooseDatabaseWindow->resize(619, 379);
        gridLayoutWidget = new QWidget(ChooseDatabaseWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 2, 2));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        exit_button = new QPushButton(ChooseDatabaseWindow);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(430, 330, 91, 31));
        save_button = new QPushButton(ChooseDatabaseWindow);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setGeometry(QRect(430, 290, 91, 31));
        scrollArea = new QScrollArea(ChooseDatabaseWindow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(99, 19, 321, 341));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 339));
        listView = new QListView(scrollAreaWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(-5, -9, 311, 351));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        listView->setFont(font);
        listView->setLayoutDirection(Qt::LeftToRight);
        listView->setAutoFillBackground(false);
        verticalSlider = new QSlider(scrollAreaWidgetContents);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(380, -1, 20, 341));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(299, -1, 21, 341));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        image_label = new QLabel(ChooseDatabaseWindow);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(-10, 0, 641, 381));
        image_label->raise();
        gridLayoutWidget->raise();
        exit_button->raise();
        save_button->raise();
        scrollArea->raise();

        retranslateUi(ChooseDatabaseWindow);

        QMetaObject::connectSlotsByName(ChooseDatabaseWindow);
    } // setupUi

    void retranslateUi(QWidget *ChooseDatabaseWindow)
    {
        ChooseDatabaseWindow->setWindowTitle(QApplication::translate("ChooseDatabaseWindow", "Wybierz baz\304\231 danych", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        ChooseDatabaseWindow->setWhatsThis(QApplication::translate("ChooseDatabaseWindow", "<html><head/><body><p>Wybierz baz\304\231 danych</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        exit_button->setText(QApplication::translate("ChooseDatabaseWindow", "Wyj\305\233cie", Q_NULLPTR));
        save_button->setText(QApplication::translate("ChooseDatabaseWindow", "OK", Q_NULLPTR));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseDatabaseWindow: public Ui_ChooseDatabaseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDATABASEWINDOW_H
