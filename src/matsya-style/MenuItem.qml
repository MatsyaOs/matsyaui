import QtQuick 2.12
import QtQuick.Templates 2.12 as T
import QtQuick.Controls 2.12
import QtQuick.Controls.impl 2.12

import MatsyaUI 1.0 as MatsyaUI

T.MenuItem
{
    id: control

    property color hoveredColor: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.2)
                                                       : Qt.rgba(0, 0, 0, 0.1)
    property color pressedColor: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.1)
                                                       : Qt.rgba(0, 0, 0, 0.2)

    implicitWidth: Math.max(implicitBackgroundWidth + leftInset + rightInset,
                            implicitContentWidth + leftPadding + rightPadding)
    implicitHeight: Math.max(implicitBackgroundHeight + topInset + bottomInset,
                             implicitContentHeight + topPadding + bottomPadding,
                             implicitIndicatorHeight + topPadding + bottomPadding)

    verticalPadding: MatsyaUI.Units.smallSpacing
    hoverEnabled: true
    topPadding: MatsyaUI.Units.smallSpacing
    bottomPadding: MatsyaUI.Units.smallSpacing

    icon.width: MatsyaUI.Units.iconSizes.medium
    icon.height: MatsyaUI.Units.iconSizes.medium

    icon.color: control.enabled ? (control.highlighted ? control.MatsyaUI.Theme.highlightColor : control.MatsyaUI.Theme.textColor) :
                             control.MatsyaUI.Theme.disabledTextColor

    contentItem: IconLabel {
        readonly property real arrowPadding: control.subMenu && control.arrow ? control.arrow.width + control.spacing : 0
        readonly property real indicatorPadding: control.checkable && control.indicator ? control.indicator.width + control.spacing : 0
        leftPadding: !control.mirrored ? indicatorPadding + MatsyaUI.Units.smallSpacing * 2 : arrowPadding
        rightPadding: control.mirrored ? indicatorPadding : arrowPadding + MatsyaUI.Units.smallSpacing * 2

        spacing: control.spacing
        mirrored: control.mirrored
        display: control.display
        alignment: Qt.AlignLeft

        icon: control.icon
        text: control.text
        font: control.font
        color: control.enabled ? control.pressed || control.hovered ? control.MatsyaUI.Theme.textColor : 
               MatsyaUI.Theme.textColor : control.MatsyaUI.Theme.disabledTextColor
    }

    background: Rectangle {
        implicitWidth: 200
        implicitHeight: control.visible ? MatsyaUI.Units.gridUnit + MatsyaUI.Units.largeSpacing : 0
        radius: MatsyaUI.Theme.mediumRadius
        opacity: 1

        anchors {
            fill: parent
            leftMargin: MatsyaUI.Units.smallSpacing
            rightMargin: MatsyaUI.Units.smallSpacing
        }

        color: control.pressed || highlighted ? control.pressedColor : control.hovered ? control.hoveredColor : "transparent"
    }
}
