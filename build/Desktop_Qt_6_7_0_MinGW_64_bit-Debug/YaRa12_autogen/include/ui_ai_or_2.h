/********************************************************************************
** Form generated from reading UI file 'ai_or_2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AI_OR_2_H
#define UI_AI_OR_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AI_or_2
{
public:
    QFrame *frame;
    QPushButton *AI;
    QPushButton *two_players;
    QLabel *label;

    void setupUi(QDialog *AI_or_2)
    {
        if (AI_or_2->objectName().isEmpty())
            AI_or_2->setObjectName("AI_or_2");
        AI_or_2->resize(400, 300);
        AI_or_2->setStyleSheet(QString::fromUtf8("*{\n"
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
        frame = new QFrame(AI_or_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 110, 211, 171));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        AI = new QPushButton(frame);
        AI->setObjectName("AI");
        AI->setGeometry(QRect(30, 40, 151, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        font.setBold(true);
        AI->setFont(font);
        two_players = new QPushButton(frame);
        two_players->setObjectName("two_players");
        two_players->setGeometry(QRect(30, 100, 151, 41));
        two_players->setFont(font);
        label = new QLabel(AI_or_2);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 60, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("century gothic")});
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label->setFont(font1);

        retranslateUi(AI_or_2);

        QMetaObject::connectSlotsByName(AI_or_2);
    } // setupUi

    void retranslateUi(QDialog *AI_or_2)
    {
        AI_or_2->setWindowTitle(QCoreApplication::translate("AI_or_2", "Dialog", nullptr));
        AI->setText(QCoreApplication::translate("AI_or_2", "Play with AI", nullptr));
        two_players->setText(QCoreApplication::translate("AI_or_2", "2 Players", nullptr));
        label->setText(QCoreApplication::translate("AI_or_2", "Choose a game:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AI_or_2: public Ui_AI_or_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AI_OR_2_H
