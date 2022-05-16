import QtQuick 2.4
import QtQuick.Layouts 1.3
import MatsyaUI 1.0 as MatsyaUI
import QtQuick.Controls 2.12
import QtGraphicalEffects 1.0

import Cutefish.Dock 1.0
Item {
    id: control
    property bool isHorizontal: Settings.direction === DockSettings.Bottom
    property real windowRadius: isHorizontal ? root.height * 0.3 : root.width * 0.3
    height: MatsyaUI.Units.largeSpacing * 2

    Layout.fillHeight: false

    Rectangle {
         anchors.centerIn: parent
        height: isHorizontal ? control.height*2.0 : 2.5
        width: isHorizontal ? 2.5 : control.height*2.0
        color: MatsyaUI.Theme.disabledTextColor
        opacity: MatsyaUI.Theme.darkMode ? 0.7 : 0.5
    }
}
