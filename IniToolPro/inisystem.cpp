#include "inisystem.h"
#include <QTextCodec>

IniSystem::IniSystem(QObject *parent) :
    QObject(parent),
    m_settings(nullptr)
{
    m_settings = new QSettings("./system.ini", QSettings::IniFormat);
    m_settings->setIniCodec(QTextCodec::codecForName("UTF-8"));

    initIni();
}

IniSystem::~IniSystem()
{
    delete m_settings;
}

bool IniSystem::has_app_style()
{
    return m_settings->contains(QString("%1/%2").arg("app").arg("style"));
}

QString IniSystem::read_app_style()
{
    return m_settings->value(QString("%1/%2").arg("app").arg("style")).toString();
}

void IniSystem::write_app_style(const QString &value)
{
    m_settings->setValue(QString("%1/%2").arg("app").arg("style"), value);
}

void IniSystem::initIni()
{

}
