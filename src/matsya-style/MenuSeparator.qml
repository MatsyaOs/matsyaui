import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Templates 2.12 as T
import MatsyaUI 1.0 as MatsyaUI

T.MenuSeparator {
    id: control

    implicitHeight: MatsyaUI.Units.largeSpacing + separator.height
    width: parent.width

    background: Rectangle {
        id: separator
        anchors.centerIn: control
        width: control.width - MatsyaUI.Units.largeSpacing * 2
        height: 1
        color: MatsyaUI.Theme.textColor
        opacity: 0.3
    }
}
