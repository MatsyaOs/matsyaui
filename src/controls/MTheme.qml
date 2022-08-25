/*
 * Copyright (C) 2021 CutefishOS Team.
 *
 * Author:     revenmartin <revenmartin@gmail.com>
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

pragma Singleton

import QtQuick 2.4
import MatsyaUI.Core 1.0 as MatsyaUICore

QtObject {
    id: theme

    property real devicePixelRatio: MatsyaUICore.ThemeManager.devicePixelRatio

    property bool darkMode: MatsyaUICore.ThemeManager.darkMode

    property color blueColor: MatsyaUICore.ThemeManager.blueColor
    property color redColor: MatsyaUICore.ThemeManager.redColor
    property color greenColor: MatsyaUICore.ThemeManager.greenColor
    property color purpleColor: MatsyaUICore.ThemeManager.purpleColor
    property color pinkColor: MatsyaUICore.ThemeManager.pinkColor
    property color orangeColor: MatsyaUICore.ThemeManager.orangeColor
    property color greyColor: MatsyaUICore.ThemeManager.greyColor

    property color backgroundColor: darkMode ? "transparent" : "transparent"
    property color secondBackgroundColor: darkMode ? "transparent" : "transparent"
    property color alternateBackgroundColor: darkMode ? "transparent" : "transparent"

    property color textColor: darkMode ? "#FFFFFF" : "#323238"
    property color disabledTextColor: darkMode ? "#888888" : "#64646E"

    property color highlightColor: MatsyaUICore.ThemeManager.accentColor
    property color highlightedTextColor: darkMode ? "#FFFFFF" : "#FFFFFF"

    property color activeTextColor: "#0176D3"
    property color activeBackgroundColor: "#0176D3"

    property color linkColor: "#2196F3"
    property color linkBackgroundColor: "#2196F3"
    property color visitedLinkColor: "#2196F3"
    property color visitedLinkBackgroundColor: "#2196F3"

    property real fontSize: MatsyaUICore.ThemeManager.fontSize
    property string fontFamily: MatsyaUICore.ThemeManager.fontFamily

    property real smallRadius: 8.0
    property real mediumRadius: 10.0
    property real bigRadius: 12.0
    property real hugeRadius: 14.0
    property real windowRadius: 11.0

    property var renderType: Text.QtRendering

    property font defaultFont: fontMetrics.font
    property font smallFont: {
        let font = fontMetrics.font
        if (!!font.pixelSize) {
            font.pixelSize =- 2
        } else {
            font.pointSize =- 2
        }
        return font
    }

    property list<QtObject> children: [
        TextMetrics {
            id: fontMetrics
        }
    ]
}
