#ifndef [=]<toUpper>(%ClassName%)_H
#define [=]<toUpper>(%ClassName%)_H

#include <QObject>
#include <QSettings>

class %ClassName% : public QObject
{
    Q_OBJECT
public:
    explicit %ClassName%(QObject *parent = nullptr);
    ~%ClassName%();

    @ClassFuncBegin@

    @ClassFuncEnd@

signals:

public slots:

private:
    void initIni();

private:
    QSettings *m_settings;
};

#endif // [=]<toUpper>(%ClassName%)_H
