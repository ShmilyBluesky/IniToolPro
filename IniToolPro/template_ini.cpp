#include "[=]<toLower>(%ClassName%).h"
#include <QTextCodec>

%ClassName%::%ClassName%(QObject *parent) :
    QObject(parent),
    m_settings(nullptr)
{
    m_settings = new QSettings(%FilePath%, QSettings::IniFormat);
    m_settings->setIniCodec(QTextCodec::codecForName("UTF-8"));

    initIni();
}

%ClassName%::~%ClassName%()
{
    delete m_settings;
}

@ClassFuncImplBegin@

@ClassFuncImplEnd@

void %ClassName%::initIni()
{

}
