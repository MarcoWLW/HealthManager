#ifndef ADDTASK_H
#define ADDTASK_H

#include <QWidget>

namespace Ui {
class addtask;
}

class addtask : public QWidget
{
    Q_OBJECT

public:
    explicit addtask(QWidget *parent = 0);
    ~addtask();

private slots:
    void on_pushButton_cancel_clicked();

private:
    Ui::addtask *ui;
};

#endif // ADDTASK_H
