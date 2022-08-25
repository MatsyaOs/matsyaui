
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0
import MatsyaUI 1.0 as MatsyaUI
Item {
    id : control

    signal clicked
    signal pressAndHold

    MouseArea {
        id: _mouseArea
        anchors.fill: parent
        hoverEnabled: true
        acceptedButtons: Qt.LeftButton
        onClicked: control.clicked()

        onPressedChanged: {
            control.scale = pressed ? 0.95 : 1.0
        }

        onPressAndHold: {
            control.pressAndHold()
        }
    }
    Rectangle {
                anchors.fill: parent

                radius: MatsyaUI.Theme.bigRadius
                opacity: 0.8
            }}

