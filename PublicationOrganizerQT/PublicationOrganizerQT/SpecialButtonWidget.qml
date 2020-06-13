import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    id: root
    state: "DEFAULT"
    property color backgroundGradient1
    property color backgroundGradient2
    property color backgroundGradient3
    property color backgroundGradient4
    property color textColor: "#ffffff"
    property int textFontSize
    property string buttonText
    anchors.fill: parent



    GradientAbleBorder {
        id: gradientBorder
        anchors.fill: parent
        radius: 10
        borderWidth: 2
        borderGradient: Gradient{
            GradientStop {
                color: "#333333"
                position: 0
            }
            GradientStop {
                color: "#c9c9c9"
                position: 0.279
            }
            GradientStop {
                color: "#696969"
                position: 0.543
            }
            GradientStop {
                color: "#363636"
                position: 0.68
            }
            GradientStop {
                color: "#ababab"
                position: 0.80
            }
            GradientStop {
                color: "#333333"
                position: 1
            }
        }


        Rectangle {
            id: innerRect
            radius: gradientBorder.radius
            clip: gradientBorder
            anchors.margins: gradientBorder.borderWidth
            anchors.fill: parent

        }
        LinearGradient {

            id: linGrad
            anchors.fill: innerRect
            source: innerRect
            start: Qt.point(0,0)
            end: Qt.point(150,150)
            gradient: Gradient {
                GradientStop {
                    position: 0
                    color: backgroundGradient1
                }

                GradientStop {
                    position: 0.279
                    color: backgroundGradient2
                }

                GradientStop {
                    position: 0.543
                    color: backgroundGradient3
                }

                GradientStop {
                    position: 1
                    color: backgroundGradient4
                }
            }

            Text {
                id: textArea
                color: textColor
                anchors.fill: parent
                text: buttonText
                font.pointSize: textFontSize
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }
}
