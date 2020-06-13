import QtQuick 2.0

Item {
    id: root
    state: "EXITED"

    // Component mouse area
    MouseArea {
        propagateComposedEvents: true
        anchors.fill: parent
        anchors.margins: 5
        onClicked:
        {
            root.state = "CLICKED"
            console.log("Clicked")
        }
        onEntered:
        {
            root.state = "HOVERING"
            console.log("Hovering")
        }
        onExited:
        {
            root.state = "EXITED"
            console.log("Exited")
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
                backgroundGradient1: "#242424"
                backgroundGradient2: "#787878"
                backgroundGradient3: "#404040"
                backgroundGradient4: "#242424"
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
            name: "HOVERING"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#242424"
                backgroundGradient2: "#6e6e6e"
                backgroundGradient3: "#404040"
                backgroundGradient4: "#242424"

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
        }

    ]
}
