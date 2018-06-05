/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *native_word_view;
    QTextBrowser *foreign_word_view;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QTextBrowser *descript_view;
    QLabel *image_view;
    QPushButton *exit_button;
    QPushButton *check_button;
    QPushButton *dont_know_button;
    QPushButton *know_button;
    QLabel *image_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(800, 600);
        centralwidget = new QWidget(MainWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 761, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 100, 761, 72));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        native_word_view = new QTextBrowser(horizontalLayoutWidget_2);
        native_word_view->setObjectName(QStringLiteral("native_word_view"));

        horizontalLayout_2->addWidget(native_word_view);

        foreign_word_view = new QTextBrowser(horizontalLayoutWidget_2);
        foreign_word_view->setObjectName(QStringLiteral("foreign_word_view"));

        horizontalLayout_2->addWidget(foreign_word_view);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 190, 291, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        descript_view = new QTextBrowser(centralwidget);
        descript_view->setObjectName(QStringLiteral("descript_view"));
        descript_view->setGeometry(QRect(10, 250, 361, 71));
        image_view = new QLabel(centralwidget);
        image_view->setObjectName(QStringLiteral("image_view"));
        image_view->setGeometry(QRect(396, 192, 371, 241));
        exit_button = new QPushButton(centralwidget);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(260, 530, 271, 41));
        check_button = new QPushButton(centralwidget);
        check_button->setObjectName(QStringLiteral("check_button"));
        check_button->setGeometry(QRect(260, 480, 271, 41));
        dont_know_button = new QPushButton(centralwidget);
        dont_know_button->setObjectName(QStringLiteral("dont_know_button"));
        dont_know_button->setGeometry(QRect(410, 480, 311, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush3(QColor(164, 166, 168, 96));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        dont_know_button->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        dont_know_button->setFont(font);
        dont_know_button->setFocusPolicy(Qt::NoFocus);
        know_button = new QPushButton(centralwidget);
        know_button->setObjectName(QStringLiteral("know_button"));
        know_button->setGeometry(QRect(60, 480, 311, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        know_button->setPalette(palette1);
        know_button->setFont(font);
        know_button->setFocusPolicy(Qt::NoFocus);
        image_label = new QLabel(centralwidget);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(-4, -8, 811, 611));
        MainWin->setCentralWidget(centralwidget);
        image_label->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget_5->raise();
        descript_view->raise();
        image_view->raise();
        exit_button->raise();
        dont_know_button->raise();
        know_button->raise();
        check_button->raise();
        statusbar = new QStatusBar(MainWin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWin->setStatusBar(statusbar);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "UCZYMY !", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">S\305\201\303\223WKO</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">T\305\201UMACZNIE</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">SYNONIM/ WYRAZ POKREWNY</span></p></body></html>", Q_NULLPTR));
        image_view->setText(QString());
        exit_button->setText(QApplication::translate("MainWin", "WYJ\305\232CIE", Q_NULLPTR));
        check_button->setText(QApplication::translate("MainWin", "SPRAWD\305\271!", Q_NULLPTR));
        dont_know_button->setText(QApplication::translate("MainWin", "NIE WIEM", Q_NULLPTR));
        know_button->setText(QApplication::translate("MainWin", "WIEM", Q_NULLPTR));
        image_label->setText(QApplication::translate("MainWin", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
