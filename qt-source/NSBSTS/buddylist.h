#ifndef BUDDYLIST_H
#define BUDDYLIST_H

#include <QMainWindow>

namespace Ui {
class buddylist;
}

class buddylist : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit buddylist(QWidget *parent = 0);
    ~buddylist();
    
private:
    Ui::buddylist *ui;
    void on_findButton_clicked();

};


#endif // BUDDYLIST_H
