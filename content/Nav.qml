import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Item {
    id: item1
    visible: true
    property alias swipeViewCurrentIndex: swipeView.currentIndex
    width: 1024
    height: 600

    SwipeView {
        id: swipeView
        x: 0
        y: 416
        width: 1024
        height: 184
        currentIndex: 0
    }
}
