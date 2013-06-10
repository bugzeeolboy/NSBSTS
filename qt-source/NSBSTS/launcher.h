#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QDialog>

namespace Ui {
class launcher;
}

class launcher : public QDialog
{
    Q_OBJECT
    
public:
    explicit launcher(QWidget *parent = 0);
    ~launcher();
    
private:
    Ui::launcher *ui;
};

#endif // LAUNCHER_H
