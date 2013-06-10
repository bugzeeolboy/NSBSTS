/********************************************************************************
** Form generated from reading UI file 'laucher.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUCHER_H
#define UI_LAUCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_laucher
{
public:
    QPushButton *registerbutton;
    QPushButton *loginbutton;
    QLineEdit *namebox;
    QLineEdit *passbox;

    void setupUi(QDialog *laucher)
    {
        if (laucher->objectName().isEmpty())
            laucher->setObjectName(QStringLiteral("laucher"));
        laucher->setWindowModality(Qt::WindowModal);
        laucher->resize(300, 300);
        laucher->setMinimumSize(QSize(300, 300));
        laucher->setMaximumSize(QSize(300, 300));
        laucher->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/bgimg.jpg);"));
        registerbutton = new QPushButton(laucher);
        registerbutton->setObjectName(QStringLiteral("registerbutton"));
        registerbutton->setGeometry(QRect(180, 170, 111, 23));
        loginbutton = new QPushButton(laucher);
        loginbutton->setObjectName(QStringLiteral("loginbutton"));
        loginbutton->setGeometry(QRect(180, 120, 111, 23));
        namebox = new QLineEdit(laucher);
        namebox->setObjectName(QStringLiteral("namebox"));
        namebox->setGeometry(QRect(10, 120, 151, 20));
        passbox = new QLineEdit(laucher);
        passbox->setObjectName(QStringLiteral("passbox"));
        passbox->setGeometry(QRect(10, 170, 151, 20));

        retranslateUi(laucher);

        QMetaObject::connectSlotsByName(laucher);
    } // setupUi

    void retranslateUi(QDialog *laucher)
    {
        laucher->setWindowTitle(QApplication::translate("laucher", "Launcher", 0));
        registerbutton->setText(QApplication::translate("laucher", "register", 0));
        loginbutton->setText(QApplication::translate("laucher", "login", 0));
#ifndef QT_NO_TOOLTIP
        namebox->setToolTip(QApplication::translate("laucher", "username", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        passbox->setToolTip(QApplication::translate("laucher", "passcode", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class laucher: public Ui_laucher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUCHER_H
