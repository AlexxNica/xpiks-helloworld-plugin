/*
 * This file is a part of HelloWorld plugin for Xpiks. Xpiks is
 * cross platform application for keywording and uploading images
 * for microstocks
 * Copyright (C) 2016 Taras Kushnir <kushnirTV@gmail.com>
 *
 * Xpiks is distributed under the GNU General Public License, version 3.0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.2
import "qrc:/StyledControls"

Rectangle {
    id: helloWorldIconWrapper
    width: 24
    height: 20
    border.color: isHighlighted ? Colors.labelActiveForeground : Colors.inactiveControlColor
    border.width: 2
    color: "transparent"

    StyledText {
        text: "hw"
        color: helloWorldIconWrapper.border.color
        font.pixelSize: 10
        anchors.verticalCenterOffset: 1
        anchors.centerIn: parent
    }
}