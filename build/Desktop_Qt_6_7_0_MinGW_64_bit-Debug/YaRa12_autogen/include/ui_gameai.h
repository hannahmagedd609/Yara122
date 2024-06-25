/********************************************************************************
** Form generated from reading UI file 'gameai.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEAI_H
#define UI_GAMEAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameAI
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton2;
    QPushButton *pushButton6;
    QPushButton *pushButton3;
    QPushButton *pushButton5;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButton7;

    void setupUi(QDialog *GameAI)
    {
        if (GameAI->objectName().isEmpty())
            GameAI->setObjectName("GameAI");
        GameAI->resize(623, 463);
        GameAI->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color:rgb(79, 200, 154);\n"
"font-family:century gothic;\n"
"font-size:20px;\n"
"}\n"
"QFrame\n"
"{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background: white;\n"
"border-radius:30px;\n"
"font-size:50px;\n"
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
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(GameAI);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        pushButton2 = new QPushButton(GameAI);
        pushButton2->setObjectName("pushButton2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        font.setBold(true);
        pushButton2->setFont(font);
        pushButton2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton6 = new QPushButton(GameAI);
        pushButton6->setObjectName("pushButton6");
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setFont(font);
        pushButton6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton3 = new QPushButton(GameAI);
        pushButton3->setObjectName("pushButton3");
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setFont(font);
        pushButton3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton3->setIconSize(QSize(20, 20));
        pushButton3->setFlat(false);

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton5 = new QPushButton(GameAI);
        pushButton5->setObjectName("pushButton5");
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setFont(font);
        pushButton5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton8 = new QPushButton(GameAI);
        pushButton8->setObjectName("pushButton8");
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setFont(font);
        pushButton8->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton9 = new QPushButton(GameAI);
        pushButton9->setObjectName("pushButton9");
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        pushButton9->setFont(font);
        pushButton9->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton1 = new QPushButton(GameAI);
        pushButton1->setObjectName("pushButton1");
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setFont(font);
        pushButton1->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton4 = new QPushButton(GameAI);
        pushButton4->setObjectName("pushButton4");
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        pushButton4->setFont(font);
        pushButton4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton7 = new QPushButton(GameAI);
        pushButton7->setObjectName("pushButton7");
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setFont(font);
        pushButton7->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(GameAI);

        QMetaObject::connectSlotsByName(GameAI);
    } // setupUi

    void retranslateUi(QDialog *GameAI)
    {
        GameAI->setWindowTitle(QCoreApplication::translate("GameAI", "Dialog", nullptr));
        pushButton2->setText(QString());
        pushButton6->setText(QString());
        pushButton3->setText(QString());
        pushButton5->setText(QString());
        pushButton8->setText(QString());
        pushButton9->setText(QString());
        pushButton1->setText(QString());
        pushButton4->setText(QString());
        pushButton7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameAI: public Ui_GameAI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEAI_H
