/********************************************************************************
** Form generated from reading UI file 'register_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_DIALOG_H
#define UI_REGISTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register_Dialog
{
public:
    QPushButton *btn2_reg;
    QLineEdit *newName;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *newPassword;
    QLabel *label_3;

    void setupUi(QDialog *register_Dialog)
    {
        if (register_Dialog->objectName().isEmpty())
            register_Dialog->setObjectName("register_Dialog");
        register_Dialog->resize(414, 341);
        register_Dialog->setStyleSheet(QString::fromUtf8("*{\n"
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
        btn2_reg = new QPushButton(register_Dialog);
        btn2_reg->setObjectName("btn2_reg");
        btn2_reg->setGeometry(QRect(190, 240, 151, 41));
        btn2_reg->setStyleSheet(QString::fromUtf8(""));
        newName = new QLineEdit(register_Dialog);
        newName->setObjectName("newName");
        newName->setGeometry(QRect(110, 110, 211, 31));
        frame = new QFrame(register_Dialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(90, 60, 261, 231));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 121, 31));
        newPassword = new QLineEdit(frame);
        newPassword->setObjectName("newPassword");
        newPassword->setGeometry(QRect(20, 130, 211, 31));
        newPassword->setEchoMode(QLineEdit::EchoMode::Password);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 111, 21));
        frame->raise();
        btn2_reg->raise();
        newName->raise();

        retranslateUi(register_Dialog);

        QMetaObject::connectSlotsByName(register_Dialog);
    } // setupUi

    void retranslateUi(QDialog *register_Dialog)
    {
        register_Dialog->setWindowTitle(QCoreApplication::translate("register_Dialog", "Dialog", nullptr));
        btn2_reg->setText(QCoreApplication::translate("register_Dialog", "register", nullptr));
        newName->setText(QCoreApplication::translate("register_Dialog", "username", nullptr));
        label_2->setText(QCoreApplication::translate("register_Dialog", "Username", nullptr));
        newPassword->setText(QCoreApplication::translate("register_Dialog", "123456", nullptr));
        label_3->setText(QCoreApplication::translate("register_Dialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_Dialog: public Ui_register_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_DIALOG_H
