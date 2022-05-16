import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

import Matsya.Accounts 1.0 as Accounts
import Matsya.Bluez 1.0 as Bluez
import Matsya.StatusBar 1.0
import Matsya.Audio 1.0
import MatsyaUI 1.0 as MatsyaUI

ControlCenterDialog {
    id: control

    width: _mainLayout.implicitWidth + MatsyaUI.Units.largeSpacing * 3
    height: _mainLayout.implicitHeight + MatsyaUI.Units.largeSpacing * 3

    onWidthChanged: adjustCorrectLocation()
    onHeightChanged: adjustCorrectLocation()
    onPositionChanged: adjustCorrectLocation()

    property point position: Qt.point(0, 0)
    property var margin: 4 * Screen.devicePixelRatio
    property var borderColor: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.3)
                                                                  : Qt.rgba(0, 0, 0, 0.2) : MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.15)
                                                                                                                  : Qt.rgba(0, 0, 0, 0.15)

    Accounts.UserAccount {
        id: currentUser
    }

    MatsyaUI.WindowBlur {
        view: control
        geometry: Qt.rect(control.x, control.y, control.width, control.height)
        windowRadius: _background.radius
        enabled: true
    }

    MatsyaUI.WindowShadow {
        view: control
        geometry: Qt.rect(control.x, control.y, control.width, control.height)
        radius: _background.radius
    }

    Rectangle {
        id: _background
        anchors.fill: parent
        radius: windowHelper.compositing ? MatsyaUI.Theme.bigRadius * 1.5 : 0
        color: MatsyaUI.Theme.darkMode ? "#4D4D4D" : "#FFFFFF"
        opacity: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? 0.5 : 0.7 : 1.0
        antialiasing: true
        border.width: 1 / Screen.devicePixelRatio
        border.pixelAligned: Screen.devicePixelRatio > 1 ? false : true
        border.color: control.borderColor

        Behavior on color {
            ColorAnimation {
                duration: 200
                easing.type: Easing.Linear
            }
        }
    }

    ColumnLayout {
        id: _mainLayout
        anchors.fill: parent
        anchors.margins: MatsyaUI.Units.largeSpacing * 1.5
        spacing: MatsyaUI.Units.largeSpacing

        RowLayout {
            spacing: MatsyaUI.Units.smallSpacing * 1.5

            Image {
                id: userIcon

                property int iconSize: 33

                Layout.preferredHeight: iconSize
                Layout.preferredWidth: iconSize
                sourceSize: String(source) === "image://icontheme/default-user" ? Qt.size(iconSize, iconSize) : undefined
                source: currentUser.iconFileName ? "file:///" + currentUser.iconFileName : "image://icontheme/default-user"
                antialiasing: true
                smooth: false

                layer.enabled: true
                layer.effect: OpacityMask {
                    maskSource: Item {
                        width: userIcon.width
                        height: userIcon.height

                        Rectangle {
                            anchors.fill: parent
                            radius: parent.height / 2
                        }
                    }
                }
            }

            Label {
                id: userLabel
                text: currentUser.userName ? currentUser.userName
                                             :qsTr("Tokyo")
                Layout.fillHeight: true
                Layout.fillWidth: true
                elide: Label.ElideRight
            }
          /*  IconButton {
                id: settingsButton
                implicitWidth: topItem.height
                implicitHeight: topItem.height
                Layout.alignment: Qt.AlignTop
                source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/" : "light/") + "settings.svg"
                onLeftButtonClicked: {
                    control.visible = false
                    process.startDetached("matsya-settings")
                }}
            StandardCard {
                Layout.preferredWidth: 32
                Layout.preferredHeight: 32
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/settings.svg"
                                            : "qrc:/images/light/settings.svg"
                visible: true
                checked: false
                onClicked: {
                    control.visible = false
                    process.startDetached("matsya-settings")
                }
            }*/
        }

        GridLayout {
            rowSpacing: MatsyaUI.Units.largeSpacing
            columnSpacing: MatsyaUI.Units.largeSpacing
            columns: 6

            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-shutdown.svg"
                                            : "qrc:/images/light/system-shutdown.svg"
                visible: true
                checked: false
                text: qsTr("Shutdown")

                onClicked: {
                    control.visible = false
                    actions.shutdown()
                }
            }

            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-reboot.svg"
                                            : "qrc:/images/light/system-reboot.svg"
                visible: true
                checked: false
                text: qsTr("Reboot")

                onClicked: {
                    control.visible = false
                    actions.reboot()
                }
            }

            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-log-out.svg"
                                            : "qrc:/images/light/system-log-out.svg"
                visible: true
                checked: false
                text: qsTr("Log out")

                onClicked: {
                    control.visible = false
                    actions.logout()
                }
            }

            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-lock-screen.svg"
                                            : "qrc:/images/light/system-lock-screen.svg"
                visible: true
                checked: false
                text: qsTr("Lock Screen")

                onClicked: {
                    control.visible = false
                    actions.lockScreen()
                }
            }

            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-suspend.svg"
                                            : "qrc:/images/light/system-suspend.svg"
                visible: true
                checked: false
                text: qsTr("Suspend")

                onClicked: {
                    control.visible = false
                    actions.suspend()
                }
            }
            StandardCard {
                Layout.preferredWidth: 96
                Layout.preferredHeight: 96
                icon: MatsyaUI.Theme.darkMode ? "MatsyaUI:/images/dark/settings.svg"
                                            : "MatsyaUI:/images/light/settings.svg"
                visible: true
                checked: false
                text: qsTr("Settings")

                onClicked: {
                    control.visible = false
                    process.startDetached("matsya-settings")
                }
        }}
    }

    PowerActions {
        id: actions
    }

    function adjustCorrectLocation() {
        var posX = control.position.x
        var posY = control.position.y

        if (posX + control.width >= StatusBar.screenRect.x + StatusBar.screenRect.width)
            posX = StatusBar.screenRect.x + StatusBar.screenRect.width - control.width - control.margin

        posY = rootItem.y + rootItem.height + control.margin

        control.x = posX
        control.y = posY
    }
}
