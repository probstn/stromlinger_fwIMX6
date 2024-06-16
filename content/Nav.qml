import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Item {
    id: item1
    visible: true
    property alias tabBarCurrentIndex: tabBar.currentIndex
    width: 1024
    height: 600

    TabBar {
        id: tabBar
        x: 392
        y: 554
        width: 240
        currentIndex: 1

        TabButton {
            text: qsTr("Health")
        }
        TabButton {
            text: qsTr("Speed")
        }
        TabButton {
            text: qsTr("Map")
        }
    }
}
