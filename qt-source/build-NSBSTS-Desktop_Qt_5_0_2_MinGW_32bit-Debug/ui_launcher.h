/********************************************************************************
** Form generated from reading UI file 'launcher.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHER_H
#define UI_LAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_launcher
{
public:
    QLineEdit *namebox;
    QPushButton *registerbutton;
    QLabel *loginstatus;
    QPushButton *loginbutton;
    QLineEdit *passbox;

    void setupUi(QDialog *launcher)
    {
        if (launcher->objectName().isEmpty())
            launcher->setObjectName(QStringLiteral("launcher"));
        launcher->resize(300, 300);
        launcher->setMinimumSize(QSize(300, 300));
        launcher->setMaximumSize(QSize(300, 300));
        launcher->setStyleSheet(QLatin1String("#launcher {\n"
"background-image: url(:/images/bgimg.jpg);\n"
"}"));
        namebox = new QLineEdit(launcher);
        namebox->setObjectName(QStringLiteral("namebox"));
        namebox->setGeometry(QRect(10, 120, 150, 25));
        namebox->setStyleSheet(QStringLiteral(""));
        registerbutton = new QPushButton(launcher);
        registerbutton->setObjectName(QStringLiteral("registerbutton"));
        registerbutton->setGeometry(QRect(180, 170, 100, 25));
        loginstatus = new QLabel(launcher);
        loginstatus->setObjectName(QStringLiteral("loginstatus"));
        loginstatus->setGeometry(QRect(10, 210, 281, 16));
        loginstatus->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        loginstatus->setTextFormat(Qt::PlainText);
        loginbutton = new QPushButton(launcher);
        loginbutton->setObjectName(QStringLiteral("loginbutton"));
        loginbutton->setGeometry(QRect(180, 120, 100, 25));
        passbox = new QLineEdit(launcher);
        passbox->setObjectName(QStringLiteral("passbox"));
        passbox->setGeometry(QRect(10, 170, 150, 25));
        passbox->setStyleSheet(QStringLiteral(""));
        passbox->setEchoMode(QLineEdit::Password);

        retranslateUi(launcher);
        QObject::connect(loginbutton, SIGNAL(clicked()), launcher, SLOT(open()));

        QMetaObject::connectSlotsByName(launcher);
    } // setupUi

    void retranslateUi(QDialog *launcher)
    {
        launcher->setWindowTitle(QApplication::translate("launcher", "NSBSTS Launcher", 0));
#ifndef QT_NO_TOOLTIP
        namebox->setToolTip(QApplication::translate("launcher", "username", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        namebox->setWhatsThis(QApplication::translate("launcher", "This is where you enter your ID. Essentially another passcode because IDs only work on one computer.", 0));
#endif // QT_NO_WHATSTHIS
        registerbutton->setText(QApplication::translate("launcher", "register", 0));
#ifndef QT_NO_TOOLTIP
        loginstatus->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        loginstatus->setWhatsThis(QApplication::translate("launcher", "This is the confirmation status, changes according to login success or fail", 0));
#endif // QT_NO_WHATSTHIS
        loginstatus->setText(QApplication::translate("launcher", "Welcome to NSBSTS.", 0));
        loginbutton->setText(QApplication::translate("launcher", "login", 0));
#ifndef QT_NO_TOOLTIP
        passbox->setToolTip(QApplication::translate("launcher", "passcode", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        passbox->setWhatsThis(QApplication::translate("launcher", "This is where you enter your passcode", 0));
#endif // QT_NO_WHATSTHIS
        passbox->setInputMask(QString());
        passbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class launcher: public Ui_launcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHER_H
