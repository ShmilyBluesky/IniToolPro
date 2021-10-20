#ifndef INISYSTEM_H
#define INISYSTEM_H

#include <QObject>
#include <QSettings>

class IniSystem : public QObject
{
    Q_OBJECT
public:
    explicit IniSystem(QObject *parent = nullptr);
    ~IniSystem();

    bool has_app_style();
    QString read_app_style();
    void write_app_style(const QString& value);

signals:

public slots:

private:
    void initIni();

private:
    QSettings *m_settings;
};

#endif // INISYSTEM_H
