

import QtQuick 2.12
import QtQuick.Window 2.3
import QtQuick.Controls 2.4
import MatsyaUI 1.0 as MatsyaUI

Item {
    id: control

    property var size: 16
    property var iconMargins: 0
    height: size
    width: size

    property alias background: _background
    property var closeicon:{
                if (mouseArea.pressed)
                    return "ea.svg"
                else if (mouseArea.containsMouse)
                    return "eh.svg"
                else
                    return "e.svg"
            }
    property color backgroundColor: "transparent"
    property color hoveredColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.backgroundColor, 2)
                                                       : Qt.darker(MatsyaUI.Theme.backgroundColor, 1.1)
    property color pressedColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.backgroundColor, 1.5)
                                                       : Qt.darker(MatsyaUI.Theme.backgroundColor, 1.2)
    property url source
    property alias image: _image
    signal clicked
    signal pressAndHold

    Rectangle {
        id: _background
        anchors.fill: parent
        anchors.margins: size * 0.1
        radius: control.height / 2
        color: mouseArea.pressed ? pressedColor : mouseArea.containsMouse ? control.hoveredColor : control.backgroundColor
    }

 MouseArea {
        id: mouseArea
        anchors.fill: parent
        hoverEnabled: true

        onClicked: control.clicked()
    }

    Image {
        id: _image
        objectName: "image"
        anchors.fill: parent
        anchors.margins: control.iconMargins
        fillMode: Image.PreserveAspectFit
        sourceSize: Qt.size(width, height)
        source:control.source+closeicon
        cache: true
        asynchronous: false
    }
}
