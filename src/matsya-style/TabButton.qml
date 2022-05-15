import QtQuick 2.9
import QtQuick.Templates 2.2 as T
import MatsyaUI 1.0 as MatsyaUI

T.TabButton {
    id: control

    property int standardHeight: MatsyaUI.Units.iconSizes.medium + MatsyaUI.Units.smallSpacing
    property color pressedColor: Qt.rgba(MatsyaUI.Theme.textColor.r, MatsyaUI.Theme.textColor.g, MatsyaUI.Theme.textColor.b, 0.5)

    implicitWidth: Math.max(background ? background.implicitWidth : 0,
                            contentItem.implicitWidth + leftPadding + rightPadding)
    implicitHeight: Math.max(background ? background.implicitHeight : 0,
                             standardHeight)
    baselineOffset: contentItem.y + contentItem.baselineOffset

    padding: 0
    spacing: 0

    contentItem: Text {
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight

        text: control.text
        font: control.font
        color: !control.enabled ? MatsyaUI.Theme.disabledTextColor : control.pressed ? pressedColor : control.checked ? MatsyaUI.Theme.textColor : MatsyaUI.Theme.textColor
    }
}
