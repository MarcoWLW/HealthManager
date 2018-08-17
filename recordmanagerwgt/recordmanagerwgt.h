#ifndef RECORDMANAGERWGT_H
#define RECORDMANAGERWGT_H

#include <QWidget>
#include "recordmanagerwgt/recordmanager.h"
#include "qtablewidget.h"
#include "markup/Markup.h"
#include <QStringList>
#include <QComboBox>
#include "mydbmanager/mydbmanager.h"
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

    void onUpdatebtnClicked();

    void onSyncbtnClicked();

private:
    int curRow;
    Ui::RecordManagerWgt *ui;
    QStringList header;
};

#endif // RECORDMANAGERWGT_H
