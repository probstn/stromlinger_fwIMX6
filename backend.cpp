#include "backend.h"
#include <QQmlComponent>
#include <QQmlProperty>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent)
{
}

void Backend::generateNumber(int min, int max)
{
    int num = rand() % ((max + 1) - min) + min;
    emit numberEmitted(num);

    m_numbersGenerated = QString::number(num);
    emit updateToNumbersGenerated();
}

void Backend::onUpdateToNumbersGenerated()
{
    // Add any additional logic if needed when the property updates
       qInfo() << "Property updated in backend.cpp";
}
