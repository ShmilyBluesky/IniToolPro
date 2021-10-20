#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "inisystem.h"
#include <QDebug>
#include <QFile>
#include <QTextCodec>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    IniSystem ini;
    ini.write_app_style("1");
    if (ini.has_app_style())
        qDebug() << "info: " << ini.read_app_style();
    else
        qDebug() << "error!";
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_btn_confirm_clicked()
{
    QFile file("./tmp.ini");
    if (file.open(QIODevice::ReadWrite))
    {
        file.write(ui->edit_content->toPlainText().toStdString().c_str());
        file.flush();
        file.close();
    }

    QSettings settings("./tmp.ini", QSettings::IniFormat);
    settings.setIniCodec(QTextCodec::codecForName("UTF-8"));

    QStringList listKeys = settings.allKeys();
    foreach (const QString& key, listKeys)
    {

    }
}
