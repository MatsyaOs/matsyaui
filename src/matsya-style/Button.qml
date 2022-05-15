/*
 * Copyright (C) 2021 CutefishOS Team.
 *
 * Author:     Reion Wong <reion@cutefishos.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.12
import QtQuick.Templates 2.12 as T
import QtGraphicalEffects 1.0
import MatsyaUI 1.0 as MatsyaUI
import QtQuick.Controls.impl 2.12

T.Button {
    id: control
    implicitWidth: Math.max(background.implicitWidth, contentItem.implicitWidth + MatsyaUI.Units.largeSpacing)
    implicitHeight: background.implicitHeight
    hoverEnabled: true

    icon.width: MatsyaUI.Units.iconSizes.small
    icon.height: MatsyaUI.Units.iconSizes.small

    icon.color: control.enabled ? (control.highlighted ? control.MatsyaUI.Theme.highlightColor : control.MatsyaUI.Theme.textColor) : control.MatsyaUI.Theme.disabledTextColor
    spacing: MatsyaUI.Units.smallSpacing

    property color hoveredColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.alternateBackgroundColor, 1.2)
                                                       : Qt.darker(MatsyaUI.Theme.alternateBackgroundColor, 1.1)

    property color pressedColor: MatsyaUI.Theme.darkMode ? Qt.lighter(MatsyaUI.Theme.alternateBackgroundColor, 1.1)
                                                       : Qt.darker(MatsyaUI.Theme.alternateBackgroundColor, 1.2)

    property color borderColor: Qt.rgba(MatsyaUI.Theme.highlightColor.r,
                                        MatsyaUI.Theme.highlightColor.g,
                                        MatsyaUI.Theme.highlightColor.b, 0.5)

    property color flatHoveredColor: Qt.rgba(MatsyaUI.Theme.highlightColor.r,
                                             MatsyaUI.Theme.highlightColor.g,
                                             MatsyaUI.Theme.highlightColor.b, 0.2)
    property color flatPressedColor: Qt.rgba(MatsyaUI.Theme.highlightColor.r,
                                             MatsyaUI.Theme.highlightColor.g,
                                             MatsyaUI.Theme.highlightColor.b, 0.25)

    contentItem: IconLabel {
        text: control.text
        font: control.font
        icon: control.icon
        color: !control.enabled ? control.MatsyaUI.Theme.disabledTextColor : control.flat ? MatsyaUI.Theme.highlightColor : MatsyaUI.Theme.textColor
        spacing: control.spacing
        mirrored: control.mirrored
        display: control.display
        alignment: Qt.AlignCenter
    }

    background: Item {
        implicitWidth: (MatsyaUI.Units.iconSizes.medium * 3) + MatsyaUI.Units.largeSpacing
        implicitHeight: MatsyaUI.Units.iconSizes.medium + MatsyaUI.Units.smallSpacing

        Rectangle {
            id: _flatBackground
            anchors.fill: parent
            radius: MatsyaUI.Theme.mediumRadius
            border.width: 1
            border.color: control.enabled ? control.activeFocus ? MatsyaUI.Theme.highlightColor : "transparent"
                                          : "transparent"
            visible: control.flat

            color: {
                if (!control.enabled)
                    return MatsyaUI.Theme.alternateBackgroundColor

                if (control.pressed)
                    return control.flatPressedColor

                if (control.hovered)
                    return control.flatHoveredColor

                return Qt.rgba(MatsyaUI.Theme.highlightColor.r,
                               MatsyaUI.Theme.highlightColor.g,
                               MatsyaUI.Theme.highlightColor.b, 0.1)
            }
        }

        Rectangle {
            id: _background
            anchors.fill: parent
            radius: MatsyaUI.Theme.mediumRadius
            border.width: 1
            visible: !control.flat
            border.color: control.enabled ? control.activeFocus ? MatsyaUI.Theme.highlightColor : "transparent"
                                          : "transparent"

            color: {
                if (!control.enabled)
                    return MatsyaUI.Theme.alternateBackgroundColor

                if (control.pressed)
                    return control.pressedColor

                if (control.hovered)
                    return control.hoveredColor

                return MatsyaUI.Theme.alternateBackgroundColor
            }
        }
    }
}
