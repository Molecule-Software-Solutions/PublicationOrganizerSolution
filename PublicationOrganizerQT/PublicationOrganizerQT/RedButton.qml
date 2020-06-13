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
                backgroundGradient1: "#330505"
                backgroundGradient2: "#eb3d3d"
                backgroundGradient3: "#810e0e"
                backgroundGradient4: "#330505"
            }
        },
        State {
            name: "CLICKED"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#9db9c8"
                backgroundGradient2: "#d06316"
                backgroundGradient3: "#810e0e"
                backgroundGradient4: "#330505"
            }
        },
        State {
            name: "HOVERING"
            PropertyChanges {
                target: specialButtonRoot
                backgroundGradient1: "#9db9c8"
                backgroundGradient2: "#d06316"
                backgroundGradient3: "#810e0e"
                backgroundGradient4: "#330505"

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
