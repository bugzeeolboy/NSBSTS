#ifndef LAUCHER_H
#define LAUCHER_H

#include <QDialog>

namespace Ui {
class laucher;
}

class laucher : public QDialog
{
    Q_OBJECT
    
public:
    explicit laucher(QWidget *parent = 0);
    ~laucher();
    
private:
    Ui::laucher *ui;
};

#endif // LAUCHER_H
