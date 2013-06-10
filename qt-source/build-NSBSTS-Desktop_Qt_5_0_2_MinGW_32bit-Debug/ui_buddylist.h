/********************************************************************************
** Form generated from reading UI file 'buddylist.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDDYLIST_H
#define UI_BUDDYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buddylist
{
public:
    QAction *actionExit_NSBSTS;
    QAction *actionDerp;
    QAction *actionOnline;
    QAction *actionLooking_to_Chat;
    QAction *actionAway;
    QAction *actionUnavailible;
    QAction *actionOffline;
    QAction *actionOffline_2;
    QAction *actionLooking_To_Chat;
    QAction *actionOnline_2;
    QAction *actionAway_2;
    QAction *actionDo_Not_Disturb;
    QAction *actionUnavailible_2;
    QAction *actionInvisible;
    QAction *actionExit;
    QAction *actionMy_Buddy_Code;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *buddytab;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QWidget *recenttab;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget_2;
    QWidget *unreadtab;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSet_Status;
    QMenu *menuBuddies;
    QMenu *menuProfile;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *buddylist)
    {
        if (buddylist->objectName().isEmpty())
            buddylist->setObjectName(QStringLiteral("buddylist"));
        buddylist->resize(300, 800);
        buddylist->setMinimumSize(QSize(250, 400));
        buddylist->setMaximumSize(QSize(400, 1050));
        actionExit_NSBSTS = new QAction(buddylist);
        actionExit_NSBSTS->setObjectName(QStringLiteral("actionExit_NSBSTS"));
        actionDerp = new QAction(buddylist);
        actionDerp->setObjectName(QStringLiteral("actionDerp"));
        actionOnline = new QAction(buddylist);
        actionOnline->setObjectName(QStringLiteral("actionOnline"));
        actionLooking_to_Chat = new QAction(buddylist);
        actionLooking_to_Chat->setObjectName(QStringLiteral("actionLooking_to_Chat"));
        actionAway = new QAction(buddylist);
        actionAway->setObjectName(QStringLiteral("actionAway"));
        actionUnavailible = new QAction(buddylist);
        actionUnavailible->setObjectName(QStringLiteral("actionUnavailible"));
        actionOffline = new QAction(buddylist);
        actionOffline->setObjectName(QStringLiteral("actionOffline"));
        actionOffline_2 = new QAction(buddylist);
        actionOffline_2->setObjectName(QStringLiteral("actionOffline_2"));
        actionLooking_To_Chat = new QAction(buddylist);
        actionLooking_To_Chat->setObjectName(QStringLiteral("actionLooking_To_Chat"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/smile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLooking_To_Chat->setIcon(icon);
        actionOnline_2 = new QAction(buddylist);
        actionOnline_2->setObjectName(QStringLiteral("actionOnline_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/neutral.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOnline_2->setIcon(icon1);
        actionAway_2 = new QAction(buddylist);
        actionAway_2->setObjectName(QStringLiteral("actionAway_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/away.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAway_2->setIcon(icon2);
        actionDo_Not_Disturb = new QAction(buddylist);
        actionDo_Not_Disturb->setObjectName(QStringLiteral("actionDo_Not_Disturb"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/dnd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDo_Not_Disturb->setIcon(icon3);
        actionUnavailible_2 = new QAction(buddylist);
        actionUnavailible_2->setObjectName(QStringLiteral("actionUnavailible_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/unavailible.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnavailible_2->setIcon(icon4);
        actionInvisible = new QAction(buddylist);
        actionInvisible->setObjectName(QStringLiteral("actionInvisible"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/sleep.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInvisible->setIcon(icon5);
        actionExit = new QAction(buddylist);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionMy_Buddy_Code = new QAction(buddylist);
        actionMy_Buddy_Code->setObjectName(QStringLiteral("actionMy_Buddy_Code"));
        centralwidget = new QWidget(buddylist);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setMovable(true);
        buddytab = new QWidget();
        buddytab->setObjectName(QStringLiteral("buddytab"));
        horizontalLayout = new QHBoxLayout(buddytab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(buddytab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon3);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon5);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        tabWidget->addTab(buddytab, QString());
        recenttab = new QWidget();
        recenttab->setObjectName(QStringLiteral("recenttab"));
        horizontalLayout_3 = new QHBoxLayout(recenttab);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidget_2 = new QListWidget(recenttab);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem3->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem4->setIcon(icon5);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        horizontalLayout_3->addWidget(listWidget_2);

        tabWidget->addTab(recenttab, QString());
        unreadtab = new QWidget();
        unreadtab->setObjectName(QStringLiteral("unreadtab"));
        verticalLayout = new QVBoxLayout(unreadtab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget_3 = new QTreeWidget(unreadtab);
        QFont font;
        font.setKerning(false);
        treeWidget_3->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font);
        treeWidget_3->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem4);
        treeWidget_3->setObjectName(QStringLiteral("treeWidget_3"));

        verticalLayout->addWidget(treeWidget_3);

        tabWidget->addTab(unreadtab, QString());

        horizontalLayout_2->addWidget(tabWidget);

        buddylist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(buddylist);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSet_Status = new QMenu(menuFile);
        menuSet_Status->setObjectName(QStringLiteral("menuSet_Status"));
        menuBuddies = new QMenu(menubar);
        menuBuddies->setObjectName(QStringLiteral("menuBuddies"));
        menuProfile = new QMenu(menubar);
        menuProfile->setObjectName(QStringLiteral("menuProfile"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        buddylist->setMenuBar(menubar);
        statusbar = new QStatusBar(buddylist);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        buddylist->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuBuddies->menuAction());
        menubar->addAction(menuProfile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(menuSet_Status->menuAction());
        menuFile->addAction(actionMy_Buddy_Code);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuSet_Status->addAction(actionLooking_To_Chat);
        menuSet_Status->addAction(actionOnline_2);
        menuSet_Status->addAction(actionAway_2);
        menuSet_Status->addSeparator();
        menuSet_Status->addAction(actionDo_Not_Disturb);
        menuSet_Status->addAction(actionUnavailible_2);
        menuSet_Status->addAction(actionInvisible);

        retranslateUi(buddylist);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(buddylist);
    } // setupUi

    void retranslateUi(QMainWindow *buddylist)
    {
        buddylist->setWindowTitle(QApplication::translate("buddylist", "NSBSTS Buddies", 0));
        actionExit_NSBSTS->setText(QApplication::translate("buddylist", "Exit NSBSTS", 0));
        actionDerp->setText(QApplication::translate("buddylist", "Derp", 0));
        actionOnline->setText(QApplication::translate("buddylist", "Online", 0));
        actionLooking_to_Chat->setText(QApplication::translate("buddylist", "Looking to Chat", 0));
        actionAway->setText(QApplication::translate("buddylist", "Away", 0));
        actionUnavailible->setText(QApplication::translate("buddylist", "Unavailible", 0));
        actionOffline->setText(QApplication::translate("buddylist", "Do Not Disturb", 0));
        actionOffline_2->setText(QApplication::translate("buddylist", "Invisible", 0));
        actionLooking_To_Chat->setText(QApplication::translate("buddylist", "Looking To Chat", 0));
        actionOnline_2->setText(QApplication::translate("buddylist", "Online", 0));
        actionAway_2->setText(QApplication::translate("buddylist", "Away", 0));
        actionDo_Not_Disturb->setText(QApplication::translate("buddylist", "Do Not Disturb", 0));
        actionUnavailible_2->setText(QApplication::translate("buddylist", "Unavailable", 0));
        actionInvisible->setText(QApplication::translate("buddylist", "Invisible", 0));
        actionExit->setText(QApplication::translate("buddylist", "Exit", 0));
        actionMy_Buddy_Code->setText(QApplication::translate("buddylist", "My Buddy Code", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("buddylist", "skinken", 0));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("buddylist", "[ i've been pooping aloooot ]", 0));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("buddylist", "kirk", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("buddylist", "Coldie", 0));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("buddylist", "TEEHEE", 0));
#endif // QT_NO_TOOLTIP
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(buddytab), QApplication::translate("buddylist", "Buddy List", 0));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("buddylist", "skinken [last 05:51]", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("buddylist", "Coldie [last 6/2/13]", 0));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(recenttab), QApplication::translate("buddylist", "Recent", 0));

        const bool __sortingEnabled2 = treeWidget_3->isSortingEnabled();
        treeWidget_3->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_3->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("buddylist", "Unread Chats", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("buddylist", "[11:42] [skinken] look at this art i made its professional", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("buddylist", "[08:29] [kirk] TREVOR ANSWER", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_3->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("buddylist", "Unread File Transfers", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("buddylist", "[11:42] [skinken] [30KB] lolart.png", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_3->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("buddylist", "Unread Voicemail", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("buddylist", "[08:31] [kirk] [duration 00:14]", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget_3->topLevelItem(3);
        ___qtreewidgetitem7->setText(0, QApplication::translate("buddylist", "Buddy Requests", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("buddylist", "[06/02/13] [asneakydog] hey long time no see still play brick-force?", 0));
        treeWidget_3->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(unreadtab), QApplication::translate("buddylist", "Unread", 0));
        menuFile->setTitle(QApplication::translate("buddylist", "Actions", 0));
        menuSet_Status->setTitle(QApplication::translate("buddylist", "Set Status", 0));
        menuBuddies->setTitle(QApplication::translate("buddylist", "Buddies", 0));
        menuProfile->setTitle(QApplication::translate("buddylist", "Profile", 0));
        menuSettings->setTitle(QApplication::translate("buddylist", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class buddylist: public Ui_buddylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDDYLIST_H
