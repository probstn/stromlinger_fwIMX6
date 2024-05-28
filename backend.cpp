#include "backend.h"
#include <QQmlComponent>
#include <QQmlProperty>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent)
{
    QObject::connect(this, &Backend::signalSpeed, this, &Backend::demoSlot); //here we connect the signalSpeed to the demoSlot to demonstrate how slots get activated if connected signals get emitted
}

void Backend::updateSpeed()
{
    int num = rand() % 100;

    m_speed = QString::number(num);
    emit signalSpeed();
}

void Backend::demoSlot()
{
    qInfo() << "demo Slot activated";
}
