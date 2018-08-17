#ifndef MYDEFINE_H
#define MYDEFINE_H
#include <QMutexLocker>
#include <QMutex>
extern QMutex *mutexForAddSqlString;
extern QMutexLocker lockerForAddSqlString;


#endif // MYDEFINE_H
