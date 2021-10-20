#ifndef AUTOCODEVARREPLACE_H
#define AUTOCODEVARREPLACE_H

#include "autocodebase.h"

namespace QtFSD {

class AutoCodeVarReplace : public AutoCodeBase
{
public:
    AutoCodeVarReplace(const QString& strVarName = QString(""),
                       const QString& strValue = QString(""));
    virtual ~AutoCodeVarReplace();

    bool doCode(const QString& strCode, QString& strResult);

private:
    QString m_strVarName;
    QString m_strValue;
};

}

#endif // AUTOCODEVARREPLACE_H
