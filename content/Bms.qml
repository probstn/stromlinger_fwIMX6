import QtQuick.Window 2.15
import QtQuick 2.15
import QtQuick3D
import Generated.QtQuick3D.Test

Item {
    id: bms
    width: 1024
    height: 600

    Item {
        id: __materialLibrary__

        PrincipledMaterial {
            id: principledMaterial
            objectName: "New Material"
        }
    }

    Backgrounds_195_610 {
        id: backgrounds_195_610
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter

        View3D {
            id: view3D
            x: 312
            y: 100
            width: 400
            height: 400

            SceneEnvironment {
                id: sceneEnvironment
                antialiasingQuality: SceneEnvironment.High
                antialiasingMode: SceneEnvironment.MSAA
            }

            Node {
                id: scene
                DirectionalLight {
                    id: directionalLight
                }

                PerspectiveCamera {
                    id: sceneCamera
                    z: 350
                }

                Model {
                    id: cubeModel
                    source: "#Cube"
                    materials: principledMaterial
                    eulerRotation.y: 45
                    eulerRotation.x: 30
                }
            }

            MouseArea {
                anchors.fill: parent
                anchors.leftMargin: 0
                property real previousX: 0
                property real previousY: 0
                onPressed: {
                    previousX = mouse.x
                    previousY = mouse.y
                }
                onPositionChanged: {
                    var deltaX = mouse.x - previousX
                    var deltaY = mouse.y - previousY
                    cubeModel.eulerRotation.y += deltaX
                    cubeModel.eulerRotation.x += deltaY
                    previousX = mouse.x
                    previousY = mouse.y
                }
            }
        }
    }

    Test {
        id: test
        x: 0
        y: 0
        scale.z: 10
        scale.y: 10
        scale.x: 10
        z: 0

        PerspectiveCamera {
            id: perspectiveCamera
            x: -0.02
            y: -0
            z: 4.61007
        }

        SpotLight {
            id: spotlight
            x: 0.051
            y: 0.209
            z: 5.12596
        }
    }
}

/*##^##
Designer {
    D{i:0}D{i:3}D{i:6;cameraSpeed3d:25;cameraSpeed3dMultiplier:1}D{i:11;cameraSpeed3d:25;cameraSpeed3dMultiplier:1}
}
##^##*/
