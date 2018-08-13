#include "healthmanagerwgt/healthmanagerwgt.h"
#include <QApplication>
#include "mydbmanager/mydbmanager.h"
#include "dataacquisitionthread/dataacquisitionthread.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataAcquisitionThread *thread = new DataAcquisitionThread;
    thread->start();
    /**DB manager*/
    MyDBManager::instance()->ConnectDatabase();
    /*******************/
    /**load style sheet*/
    QString qss;
    QFile qssFile("./qss/mystyle.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        qss = QLatin1String(qssFile.readAll());
//        qApp->setStyleSheet(qss);
        qssFile.close();
    }
    /*******************/
    HealthManagerWgt w;
    w.show();

    return a.exec();

}











