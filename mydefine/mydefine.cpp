#include "mydefine.h"
QMutex* mutexForAddSqlString = new QMutex;
QMutexLocker lockerForAddSqlString(mutexForAddSqlString);
