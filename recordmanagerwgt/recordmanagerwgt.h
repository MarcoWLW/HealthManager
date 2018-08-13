#ifndef RECORDMANAGERWGT_H
#define RECORDMANAGERWGT_H

#include <QWidget>
#include "recordmanagerwgt/recordmanager.h"
#include "qtablewidget.h"
#include "markup/Markup.h"
#include <QStringList>
#include <QComboBox>

namespace Ui {
class RecordManagerWgt;
}

class RecordManagerWgt : public QWidget
{
    Q_OBJECT

public:
    std::vector<QString> defVec;
    explicit RecordManagerWgt(QWidget *parent = 0);
    ~RecordManagerWgt();
    void updateTable();
    QStringList getConfigInfoByTopic(QString str);
private slots:
    void onStartdecernbtnClicked();

    void onChooselabelbtnClicked();

    void onLabelinfotableItemclicked(QTableWidgetItem *item);

private:
    int curRow;
    Ui::RecordManagerWgt *ui;
};

#endif // RECORDMANAGERWGT_H
