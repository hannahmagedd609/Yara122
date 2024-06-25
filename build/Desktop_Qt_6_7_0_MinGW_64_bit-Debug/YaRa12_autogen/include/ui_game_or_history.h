/********************************************************************************
** Form generated from reading UI file 'game_or_history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_OR_HISTORY_H
#define UI_GAME_OR_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_game_or_history
{
public:
    QFrame *frame;
    QListView *listView;
    QPushButton *view_game_history;
    QPushButton *play_new_game;

    void setupUi(QDialog *game_or_history)
    {
        if (game_or_history->objectName().isEmpty())
            game_or_history->setObjectName("game_or_history");
        game_or_history->resize(390, 352);
        game_or_history->setStyleSheet(QString::fromUtf8("*{\n"
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
        frame = new QFrame(game_or_history);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 10, 291, 311));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        listView = new QListView(frame);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 100, 256, 192));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 253, 255);"));
        view_game_history = new QPushButton(frame);
        view_game_history->setObjectName("view_game_history");
        view_game_history->setGeometry(QRect(30, 50, 231, 31));
        play_new_game = new QPushButton(frame);
        play_new_game->setObjectName("play_new_game");
        play_new_game->setGeometry(QRect(30, 10, 231, 31));

        retranslateUi(game_or_history);

        QMetaObject::connectSlotsByName(game_or_history);
    } // setupUi

    void retranslateUi(QDialog *game_or_history)
    {
        game_or_history->setWindowTitle(QCoreApplication::translate("game_or_history", "Dialog", nullptr));
        view_game_history->setText(QCoreApplication::translate("game_or_history", "View Game History", nullptr));
        play_new_game->setText(QCoreApplication::translate("game_or_history", "Play New Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_or_history: public Ui_game_or_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_OR_HISTORY_H
