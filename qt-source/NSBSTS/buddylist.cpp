#include "buddylist.h"
#include "ui_buddylist.h"

buddylist::buddylist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::buddylist)
{
    ui->setupUi(this);
}

buddylist::~buddylist()
{
    delete ui;
}
