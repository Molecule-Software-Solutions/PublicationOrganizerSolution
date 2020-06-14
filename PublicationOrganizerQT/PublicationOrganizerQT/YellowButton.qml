import QtQuick 2.0

Item {
    id: root
    state: "EXITED"

    // Component mouse area
    MouseArea {
        propagateComposedEvents: true
        hoverEnabled: true
        anchors.fill: parent
        anchors.margins: 5
        onPressed:
        {
            root.state = "CLICKED"
        }
        onReleased:
        {
            root.state = "RELEASED"
        }
        onEntered:
        {
            root.state = "HOVERING"
        }
        onExited:
        {
            root.state = "EXITED"
        }
    }


    SpecialButtonWidget {
        id: specialButtonRoot
        buttonText: displayText
        textFontSize: displayFontSize
    }


    states: [
        State {
            name: "EXITED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#584809"
                backgroundGradient2: "#eac739"
                backgroundGradient3: "#b99813"
                backgroundGradient4: "#584809"
            }
        },
        State {
            name: "CLICKED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#9db9c8"
                backgroundGradient2: "#c1f179"
                backgroundGradient3: "#b99813"
                backgroundGradient4: "#584809"
            }
        },
        State {
          name: "RELEASED"
          PropertyChanges {
              target: specialButtonRoot
              backgroundGradient1: "#584809"
              backgroundGradient2: "#eac739"
              backgroundGradient3: "#b99813"
              backgroundGradient4: "#584809"
          }
        },

        State {
            name: "HOVERING"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#584809"
                backgroundGradient2: "#c1f179"
                backgroundGradient3: "#b99813"
                backgroundGradient4: "#584809"

            }
        }


    ]

    transitions: [
        Transition {
            to: "CLICKED"

            ColorAnimation {
                target: specialButtonRoot
                duration: 150
            }
        },

        Transition {
          to: "HOVERING"

          ColorAnimation {
              target: specialButtonRoot
              duration: 500
          }
        },

        Transition {
            to: "EXITED"

            ColorAnimation {
                target: specialButtonRoot
                duration: 150
            }
        },
        Transition {
            to: "RELEASED"

            ColorAnimation {
                target: specialButtonRoot
                duration: 150
            }

        }

    ]
}
