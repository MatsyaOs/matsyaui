import QtQuick 2.1
import QtQuick.Window 2.2
import QtQuick.Templates 2.3 as T
import MatsyaUI 1.0 as MatsyaUI

T.Label {
    id: control

    verticalAlignment: lineCount > 1 ? Text.AlignTop : Text.AlignVCenter

    activeFocusOnTab: false
    // Text.NativeRendering is broken on non integer pixel ratios
    // renderType: Window.devicePixelRatio % 1 !== 0 ? Text.QtRendering : Text.NativeRendering

    renderType: MatsyaUI.Theme.renderType

    font.capitalization: MatsyaUI.Theme.defaultFont.capitalization
    font.family: MatsyaUI.Theme.fontFamily
    font.italic: MatsyaUI.Theme.defaultFont.italic
    font.letterSpacing: MatsyaUI.Theme.defaultFont.letterSpacing
    font.pointSize: MatsyaUI.Theme.fontSize
    font.strikeout: MatsyaUI.Theme.defaultFont.strikeout
    font.underline: MatsyaUI.Theme.defaultFont.underline
    font.weight: MatsyaUI.Theme.defaultFont.weight
    font.wordSpacing: MatsyaUI.Theme.defaultFont.wordSpacing
    color: MatsyaUI.Theme.textColor
    linkColor: MatsyaUI.Theme.linkColor

    opacity: enabled ? 1 : 0.6

    Accessible.role: Accessible.StaticText
    Accessible.name: text
}
