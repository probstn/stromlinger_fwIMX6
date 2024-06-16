import QtQuick 2.15
import QtQuick.Controls 2.15
import QtLocation 5.15

Item {
    id: mapPage
    width: 1024
    height: 600

    Plugin {
        id: mapPlugin
        name: "osm"  // OpenStreetMap plugin
    }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center {
            // Coordinates for Esternberg, Austria
            latitude: 48.4000
            longitude: 13.9667
        }
        zoomLevel: 12  // Adjust the zoom level as needed
    }
}
