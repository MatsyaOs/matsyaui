

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import MatsyaUI 1.0 as MatsyaUI

Item {
    id: control

    property url source
    property bool checked: false
    property real size: 24
    property string popupText

    signal leftButtonClicked
    signal rightButtonClicked
    signal clicked
    signal pressAndHold
    property var backgroundColor: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.1)
                                                         : Qt.rgba(0, 0, 0, 0.05)
     property var hoverColor: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.15)
                                                    : Qt.rgba(0, 0, 0, 0.1)
     property var pressedColor: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.2)
                                                      : Qt.rgba(0, 0, 0, 0.15)

     property var highlightHoverColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.highlightColor, 1.1)
                                                             : Qt.darker(MatsyaUI.Theme.highlightColor, 1.1)
     property var highlightPressedColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.highlightColor, 1.1)
                                                               : Qt.darker(MatsyaUI.Theme.highlightColor, 1.2)



    MouseArea {
        id: mouseArea
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton | Qt.RightButton
        hoverEnabled: control.visible ? true : false

        onClicked: {
            if (mouse.button === Qt.LeftButton)
                control.leftButtonClicked()
            else if (mouse.button === Qt.RightButton)
                control.rightButtonClicked()
        }
        onPressAndHold: {
            control.pressAndHold()
        }
    }


    Rectangle {
        anchors.fill: parent
        // radius: parent.height * 0.2
       //radius: parent.height / 2
        radius: height/2
       /* color: {
            if (mouseArea.containsMouse) {
                if (mouseArea.containsPress)
                    return (MatsyaUI.Theme.darkMode) ? Qt.rgba(255, 255, 255, 0.3) : Qt.rgba(0, 0, 0, 0.2)
                else
                    return (MatsyaUI.Theme.darkMode) ? Qt.rgba(255, 255, 255, 0.2) : Qt.rgba(0, 0, 0, 0.1)
            }

            return "transparent"
        }*/
        color: {
            if (control.checked) {
                if (mouseArea.pressed)
                    return highlightPressedColor
                else if (mouseArea.containsMouse)
                    return highlightHoverColor
                else
                    return MatsyaUI.Theme.highlightColor
            } else {
                if (mouseArea.pressed)
                    return pressedColor
                else if (mouseArea.containsMouse)
                    return hoverColor
                else
                    return backgroundColor
            }
        }
    }

    Image {
        id: iconImage
        anchors.centerIn: parent
        width:15
        height:15
        sourceSize.width:15
        sourceSize.height:15
        source: control.source
        asynchronous: true
        antialiasing: true
        smooth: false
    }
}
