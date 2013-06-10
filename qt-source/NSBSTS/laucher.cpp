#include "laucher.h"
#include "ui_laucher.h"

laucher::laucher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::laucher)
{
    ui->setupUi(this);
}

laucher::~laucher()
{
    delete ui;
}
