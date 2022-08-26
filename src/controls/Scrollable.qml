/*
 * Copyright (C) 2021 MatsyaOS Team.
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

import QtQuick 2.4
import QtQuick.Controls 2.4
import MatsyaUI 1.0 as MatsyaUI

Flickable {
    id: root
    flickableDirection: Flickable.VerticalFlick
    clip: true

    topMargin: MatsyaUI.Units.largeSpacing
    leftMargin: MatsyaUI.Units.largeSpacing * 2
    rightMargin: MatsyaUI.Units.largeSpacing * 2

    contentWidth: width - (leftMargin + rightMargin)

    MatsyaUI.WheelHandler {
        id: wheelHandler
        target: root
    }

    ScrollBar.vertical: ScrollBar {
        bottomPadding: MatsyaUI.Theme.smallRadius
    }
}