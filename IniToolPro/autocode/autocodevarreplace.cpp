#include "autocodevarreplace.h"
#include <QDebug>

using namespace QtFSD;

AutoCodeVarReplace::AutoCodeVarReplace(const QString &strVarName, const QString &strValue) :
    m_strVarName(strVarName),
    m_strValue(strValue)
{

}

AutoCodeVarReplace::~AutoCodeVarReplace()
{

}

bool AutoCodeVarReplace::doCode(const QString &strCode, QString &strResult)
{
    if (m_strVarName.length() <= 0)
    {
        qDebug() << "Error: AutoCodeVarReplace var name is null!";
        return false;
    }

    if (m_strValue.length() <= 0)
    {
        qDebug() << "Info: AutoCodeVarReplace value is null!";
    }

    QString strVarStr = QString("%") + QString("%1").arg(m_strVarName) + QString("%");
    if (!strCode.contains(strVarStr))
        return false;

    strResult = strCode;
    strResult = strResult.replace(strVarStr, m_strValue);

    return true;
}
