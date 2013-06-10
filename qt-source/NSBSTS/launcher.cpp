#include "launcher.h"
#include "ui_launcher.h"

launcher::launcher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::launcher)
{
    ui->setupUi(this);
}

launcher::~launcher()
{
    delete ui;
}


