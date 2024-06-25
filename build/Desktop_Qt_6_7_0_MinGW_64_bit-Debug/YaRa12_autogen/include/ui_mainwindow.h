/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QPushButton *Login;
    QPushButton *Register;
    QLineEdit *userName;
    QLineEdit *PassWord;
    QLabel *label_5;
    QToolButton *toolButton;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(874, 686);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color:rgb(79, 200, 154);\n"
"font-family:century gothic;\n"
"font-size:24px;\n"
"}\n"
"QFrame\n"
"{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background: rgb(79, 200, 154);\n"
"border-radius:60px;\n"
"}\n"
"QToolButton\n"
"{\n"
"background: rgb(79, 200, 154);\n"
"border-radius:60px;\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"border-radius:15px;\n"
"background:#49edff;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid#717072;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 851, 101));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Eras Bold ITC\";\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(280, 240, 321, 401));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        Login = new QPushButton(frame);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(80, 250, 171, 31));
        Login->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";"));
        Register = new QPushButton(frame);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(110, 350, 111, 31));
        Register->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        userName = new QLineEdit(frame);
        userName->setObjectName("userName");
        userName->setGeometry(QRect(10, 130, 281, 31));
        userName->setStyleSheet(QString::fromUtf8(""));
        PassWord = new QLineEdit(frame);
        PassWord->setObjectName("PassWord");
        PassWord->setGeometry(QRect(10, 200, 281, 31));
        PassWord->setEchoMode(QLineEdit::EchoMode::Password);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 310, 151, 31));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 11pt \"Agency FB\";"));
        toolButton = new QToolButton(frame);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(120, 0, 81, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/user.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(50, 50));
        toolButton->setAutoRaise(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 121, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 180, 111, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WELCOME TO TIC TAC TOE GAME", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        Register->setText(QCoreApplication::translate("MainWindow", "register", nullptr));
        userName->setText(QCoreApplication::translate("MainWindow", "username", nullptr));
        PassWord->setInputMask(QString());
        PassWord->setText(QCoreApplication::translate("MainWindow", "123456", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "if you don't have an account", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
