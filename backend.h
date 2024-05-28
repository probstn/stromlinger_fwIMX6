#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QtQml>
#include <QQmlApplicationEngine>

class Backend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString speed MEMBER m_speed NOTIFY signalSpeed) //NOTIFY signalSpeed updates the speed value if the signalSpeed signal gets emitted

public:
    explicit Backend(QObject *parent = nullptr);
    Q_INVOKABLE void updateSpeed();

public slots:
    void demoSlot();

signals: //signals get emitted and notify all the slots
    void signalSpeed();

private:
    QString m_speed = "69";
};

#endif // BACKEND_H
