import QtQuick 2.0

Item {

    id: root
    state: "EXITED"
    onEnabledChanged: {
        if(!enabled)
        {
            state: "DISABLED"
        }
        else {
            state: "EXITED"
        }
    }

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
            name: "DISABLED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#b3b3b3"
                backgroundGradient2: "#b3b3b3"
                backgroundGradient3: "#b3b3b3"
                backgroundGradient4: "#b3b3b3"
            }
        },
        State {
            name: "EXITED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#166932"
                backgroundGradient2: "#70a423"
                backgroundGradient3: "#456515"
                backgroundGradient4: "#10472a"
            }
        },
        State {
            name: "CLICKED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#9db9c8"
                backgroundGradient2: "#d0db57"
                backgroundGradient3: "#456515"
                backgroundGradient4: "#10472a"
            }
        },
        State {
          name: "RELEASED"
          PropertyChanges {
              target: specialButtonRoot
              backgroundGradient1: "#166932"
              backgroundGradient2: "#70a423"
              backgroundGradient3: "#456515"
              backgroundGradient4: "#10472a"
          }
        },

        State {
            name: "HOVERING"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#166932"
                backgroundGradient2: "#d0db57"
                backgroundGradient3: "#456515"
                backgroundGradient4: "#10472a"
            }
        }
    ]

    transitions: [
        Transition {
            to: "CLICKED"

            ColorAnimation {
                target: specialButtonRoot
                duration: 150
                loops: 1
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
