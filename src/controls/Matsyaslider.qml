import QtQuick 2.6
import QtQuick.Templates 2.3 as T
import QtGraphicalEffects 1.0
import MatsyaUI 1.0 as MatsyaUI

T.Slider {
    id: control
property url source
    property bool checked: false
    property real size: 24
    property string popupText
    property int sliderTrackHeight: 22
    implicitWidth: background.implicitWidth
    implicitHeight: 22
    snapMode: T.Slider.SnapOnRelease
handle: Rectangle {
               id: handleRect
               x: control.leftPadding + (control.horizontal ? control.visualPosition * (control.availableWidth - width) : (control.availableWidth-width) / 2)
               y: control.topPadding + (control.horizontal ? (control.availableHeight - height) / 2 : control.visualPosition * (control.availableHeight - height))

               width:0 // control.implicitHeight
               height:0// width
               radius:0// width / 2
               opacity: 0
               antialiasing: true
               border.width: 0

               color: control.pressed ? control.MatsyaUI.Theme.highlightColor : MatsyaUI.Theme.darkMode ?  Qt.rgba(0, 0, 0, 0.6) : Qt.rgba(255, 255, 255, 0.5)

               layer.enabled: true
               layer.effect: DropShadow {
                   transparentBorder: true
                   radius: 8
                   samples: 12
                   horizontalOffset: 0
                   verticalOffset: 0
                   color: Qt.rgba(0, 0, 0, control.pressed ? 0.25 : 0.15)
               }
           }


    background: Item {
        implicitWidth: control.horizontal ? 200 : control.implicitHeight
        implicitHeight: control.horizontal ? control.implicitHeight : 200

        x: control.leftPadding + (control.horizontal ? 0 : (control.availableWidth - width) / 2)
        y: control.topPadding + (control.horizontal ? (control.availableHeight - height) / 2 : 0)
        width: control.horizontal ? control.availableWidth : implicitWidth
        height: control.horizontal ? implicitHeight : control.availableHeight
        scale: control.horizontal && control.mirrored ? -1 : 1

        Rectangle {
            x: control.horizontal ? 0 : (parent.width - width) / 2
            y: control.horizontal ? (parent.height - height) / 2 : 0
            width: control.horizontal ? parent.width : sliderTrackHeight+3
            height: !control.horizontal ? parent.height : sliderTrackHeight+3
            radius: !control.horizontal ? parent.width / 2 : sliderTrackHeight+6 / 2
            color: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.7) : Qt.rgba(0, 0, 0, 0.5)
        }

        Rectangle {
            x: control.horizontal ? 0 : (parent.width - width) / 2
            y: control.horizontal ? (parent.height - height) / 2 : control.visualPosition * parent.height
            width: control.horizontal ? control.position * parent.width: sliderTrackHeight
            height: !control.horizontal ? control.position * parent.height : sliderTrackHeight
            radius: !control.horizontal ? parent.width / 2 : sliderTrackHeight / 2
            color: MatsyaUI.Theme.darkMode ?  Qt.rgba(0, 0, 0, 0.5) : Qt.rgba(255, 255, 255, 0.7)
    Image {
        id: jigsawImage
        anchors.centerIn: parent
        width:18
        height:18
        sourceSize.width:18
        sourceSize.height:18
        source: control.source
        asynchronous: true
        antialiasing: true
        smooth: false
    }


        }
    }
}
