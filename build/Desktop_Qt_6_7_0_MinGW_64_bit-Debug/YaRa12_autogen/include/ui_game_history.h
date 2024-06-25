/********************************************************************************
** Form generated from reading UI file 'game_history.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_HISTORY_H
#define UI_GAME_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_game_history
{
public:
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *game_history)
    {
        if (game_history->objectName().isEmpty())
            game_history->setObjectName("game_history");
        game_history->resize(400, 300);
        label = new QLabel(game_history);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 30, 91, 20));
        listView = new QListView(game_history);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(80, 80, 256, 192));

        retranslateUi(game_history);

        QMetaObject::connectSlotsByName(game_history);
    } // setupUi

    void retranslateUi(QDialog *game_history)
    {
        game_history->setWindowTitle(QCoreApplication::translate("game_history", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("game_history", "Game History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_history: public Ui_game_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_HISTORY_H
