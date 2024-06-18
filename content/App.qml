import QtQuick 2.15
import QtQuick.Window 2.15
import ClusterTutorial 1.0
import QtQuick.Controls 2.15

Window {
    width: 1024
    height: 600
    visible: true
    title: "ClusterTutorial"

    SwipeView {
        id: swipeView
        width: 1024
        height: 600
        visible: true
        currentIndex: 1
        interactive: false
        // Disable default swipe interaction
        clip: true

        Bms_Page {
            id: bms
        }

        Cluster_Art {
            id: speed
        }

        MapPage {
            id: map
        }
    }

    // MouseArea to handle swiping at the bottom of the screen
    MouseArea {
        id: swipeArea
        anchors.left: parent.left
        anchors.right: parent.right
        height: 189 // Height of the swipe area at the bottom
        anchors.bottom: parent.bottom

        property real startX: 0
        property real startY: 0
        y: 411

        onPressed: {
            startX = mouse.x
            startY = mouse.y
        }

        onReleased: {
            var deltaX = mouse.x - startX
            var deltaY = mouse.y - startY

            if (Math.abs(deltaX) > Math.abs(deltaY)) {
                if (deltaX < -50 && swipeView.currentIndex < swipeView.count - 1) {
                    // Swipe left to right, go to the next page
                    swipeView.currentIndex += 1
                } else if (deltaX > 50 && swipeView.currentIndex > 0) {
                    // Swipe right to left, go to the previous page
                    swipeView.currentIndex -= 1
                }
            }
        }
    }
}
