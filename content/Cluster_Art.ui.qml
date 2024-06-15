

/****************************************************************************
**
** Copyright (C) 2019 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Design Studio.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
import QtQuick 2.8
import QtQuick.Timeline 1.0
import Data 1.0 as Data
import QtQuick.Studio.Components 1.0
import QtQuick.Studio.Effects 1.0
import ClusterTutorial
import QtQuick.Controls

Item {
    id: cluster_Art
    width: 1024
    height: 600

    Image {
        id: cluster_ArtAsset
        x: 0
        y: 0
        width: 1024
        height: 600
        source: "assets/Cluster_Art.png"
    }

    Backgrounds_195_610 {
        id: backgrounds_195_610
        x: 0
        y: 0
        width: 1024
        height: 600
    }

    Fuel_dial_195_43 {
        id: fuelDial
        x: 635
        y: 129
        width: 512
        height: 630
        visible: true
        scale: 0.5
        rangeDisplay: Data.Values.displayRange
        litersDisplay: Data.Values.displayLiters
        fuelFrame: Data.Values.liters
    }

    Rpm_dial_195_83 {
        id: rpmDial
        width: 508
        height: 591
        scale: 0.5
        x: -86
        y: 148
        displayRpm: Data.Values.displayRpm
        rpmFrame: Data.Values.rpm
    }

    FlipableItem {
        id: flipable
        x: 123
        y: -150
        width: 778
        height: 730
        scale: 0.6

        Speed_dial_195_151 {
            x: 91
            y: 91
            kplDisplay: Data.Values.displayKpl
            kphDisplay: Data.Values.displayKph
            kphFrame: Data.Values.kph
        }

        Image {
            id: image
            x: -111
            y: -135
            source: "carLogo.svg"
        }
    }

    Timeline {
        id: bootTImeline
        animations: [
            TimelineAnimation {
                id: timelineAnimation
                property: "currentFrame"
                duration: 5000
                running: false
                loops: 1
                to: 5000
                from: 0
            }
        ]
        startFrame: 0
        endFrame: 5000
        enabled: true

        KeyframeGroup {
            target: flipable
            property: "flipAngle"
            Keyframe {
                value: 180
                frame: 0
            }

            Keyframe {
                value: 180
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.90, 0.03, 0.69, 0.22, 1, 1]
                value: 1.1
                frame: 4117
            }
        }

        KeyframeGroup {
            target: flipable
            property: "opacity"
            Keyframe {
                value: 0
                frame: 0
            }

            Keyframe {
                easing.bezierCurve: [0.17, 0.84, 0.44, 1.00, 1, 1]
                value: 1
                frame: 1015
            }
        }

        KeyframeGroup {
            target: rpmDial
            property: "opacity"

            Keyframe {
                value: 0
                frame: 0
            }

            Keyframe {
                value: 0
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
                value: 1
                frame: 3293
            }
        }

        KeyframeGroup {
            target: rpmDial
            property: "scale"
            Keyframe {
                value: 0.01
                frame: 0
            }

            Keyframe {
                value: 0.01
                frame: 2386
            }

            Keyframe {
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
                value: 0.5
                frame: 3293
            }
        }

        KeyframeGroup {
            target: fuelDial
            property: "opacity"
            Keyframe {
                frame: 0
                value: 0
            }

            Keyframe {
                frame: 2386
                value: 0
            }

            Keyframe {
                frame: 3293
                value: 1
                easing.bezierCurve: [0.95, 0.05, 0.80, 0.04, 1, 1]
            }
        }

        KeyframeGroup {
            target: fuelDial
            property: "scale"
            Keyframe {
                frame: 0
                value: 0.01
            }

            Keyframe {
                frame: 2386
                value: 0.01
            }

            Keyframe {
                value: 0.5
                frame: 3293
            }
        }
    }

    SwipeView {
        id: swipeView
        y: 414
        width: 400
        height: 186
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        orientation: Qt.Vertical
        clip: true
        currentIndex: 1
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter

        Item {
            x: 0
            y: 0
        }
        Item {
            id: tire
            width: 400
            height: 186

            Image {
                id: tire_left
                x: 10
                y: 0
                width: 146
                height: 185
                anchors.verticalCenter: parent.verticalCenter
                source: "assets/tires.webp"
                rotation: 0
                anchors.horizontalCenterOffset: -100
                anchors.horizontalCenter: parent.horizontalCenter
                fillMode: Image.PreserveAspectFit

                Rectangle {
                    id: rect_left
                    x: 171
                    y: 18
                    width: 3
                    height: 150
                    color: "#ffffff"
                    anchors.horizontalCenter: parent.horizontalCenter
                    z: -1
                }
            }

            Image {
                id: tire_right
                x: 210
                y: 0
                width: 146
                height: 185
                anchors.verticalCenter: parent.verticalCenter
                source: "assets/tires.webp"
                mipmap: true
                anchors.horizontalCenterOffset: 100
                anchors.horizontalCenter: parent.horizontalCenter
                fillMode: Image.PreserveAspectFit

                Rectangle {
                    id: rect_right
                    x: -29
                    y: 18
                    width: 3
                    height: 150
                    color: "#ffffff"
                    anchors.horizontalCenter: parent.horizontalCenter
                    z: -1
                }
            }

            Text {
                id: rotation_number
                x: 246
                y: 65
                visible: true
                color: "#ffffff"
                text: " 0°"
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 40
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenterOffset: 0
                anchors.horizontalCenter: parent.horizontalCenter
                font.family: "AppleSystemUIFont"
            }
        }
        Item {
            id: temps
            width: 400
            height: 186

            Grid {
                id: grid
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                verticalItemAlignment: Grid.AlignVCenter
                horizontalItemAlignment: Grid.AlignHCenter
                columns: 3
                rows: 3
                padding: 5

                Text {
                    id: motor_text
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "motor"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.italic: false
                    font.bold: false
                    font.family: "Cherry"
                }

                Image {
                    id: motor_icon
                    width: 50
                    height: 50
                    source: "icons/engineIconOff.png"
                    mirror: true
                    fillMode: Image.PreserveAspectFit
                }

                Text {
                    id: motor_temp
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "40°C"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.family: "Cherry"
                }

                Text {
                    id: esc_text
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "esc"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.italic: false
                    font.family: "Cherry"
                    font.bold: false
                }

                Image {
                    id: esc_icon
                    width: 50
                    height: 50
                    source: "icons/engineIconOff.png"
                    mirror: true
                    fillMode: Image.PreserveAspectFit
                }

                Text {
                    id: esc_temp
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "40°C"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.family: "Cherry"
                }

                Text {
                    id: bat_text
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "esc"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.italic: false
                    font.family: "Cherry"
                    font.bold: false
                }

                Image {
                    id: bat_icon
                    width: 50
                    height: 50
                    source: "icons/engineIconOff.png"
                    mirror: true
                    fillMode: Image.PreserveAspectFit
                }

                Text {
                    id: bat_temp
                    width: 135
                    height: 50
                    color: "#ffffff"
                    text: "40°C"
                    font.pixelSize: 30
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    font.family: "Cherry"
                }
            }
        }
    }

    Text {
        id: time
        x: 874
        y: 8
        color: "#ffffff"
        text: "10:50"
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.rightMargin: 8
        anchors.topMargin: 8
        font.pixelSize: 40
        padding: 20
    }

    states: [
        State {
            name: "bootState"
            when: Data.Values.booting

            PropertyChanges {
                target: bootTImeline
                enabled: true
            }

            PropertyChanges {
                target: timelineAnimation
                running: true
            }
        },
        State {
            name: "running"
            when: !Data.Values.booting

            PropertyChanges {
                target: bootTImeline
                currentFrame: 5000
                enabled: true
            }

            PropertyChanges {
                target: grid
                height: 186
            }
        }
    ]
}
