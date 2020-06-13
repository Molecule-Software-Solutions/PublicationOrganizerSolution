import QtQuick 2.0
import QtGraphicalEffects 1.0
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Rectangle {
    id: root
    color: "transparent"
    property Gradient borderGradient
    property int borderWidth: 0

    Loader {
        id: loader
        active: borderGradient
        anchors.fill: parent
        sourceComponent: border
    }

    Component.onCompleted: console.log(loader.active)

    Component {
        id: border
        Item {

            Rectangle {
                id: borderFill
                radius: root.radius
                anchors.fill: parent
                visible: false
                LinearGradient {
                    id: linGrad
                    anchors.fill: borderFill
                    source: borderFill
                    start: Qt.point(0,0)
                    end: Qt.point(300,65)
                    gradient: root.borderGradient
                }
            }

            Rectangle {
                id: fillMask
                radius: root.radius
                border.width: root.borderWidth
                anchors.fill: borderFill
                color: "transparent"
                visible: false
            }

            OpacityMask {
                id: opM
                anchors.fill: parent
                source: borderFill
                maskSource: fillMask
            }
        }
    }
}
