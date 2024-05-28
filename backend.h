#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QtQml>
#include <QQmlApplicationEngine>

class Backend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString numbersGenerated MEMBER m_numbersGenerated NOTIFY updateToNumbersGenerated)

public:
    explicit Backend(QObject *parent = nullptr);
    Q_INVOKABLE void generateNumber(int min, int max);

public slots:
    void onUpdateToNumbersGenerated();

signals:
    void numberEmitted(int num);
    void updateToNumbersGenerated();

private:
    QString m_numbersGenerated = "69";
};

#endif // BACKEND_H
