#ifndef AUTOCODEBASE_H
#define AUTOCODEBASE_H

#include <QtCore>

namespace QtFSD {

class AutoCodeBase
{
public:
    AutoCodeBase()
    {
    }

    virtual ~AutoCodeBase()
    {
    }

    virtual bool doCode(const QString& strCode, QString& strResult) = 0;
};

}

#endif // AUTOCODEBASE_H
