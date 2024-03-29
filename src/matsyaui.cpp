/*
 * Copyright (C) 2021 CutefishOS Team.
 *
 * Author:     cutefish <cutefishos@foxmail.com>
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

#include "matsyaui.h"
#include "thememanager.h"
#include "iconthemeprovider.h"
#include "shadowhelper/windowshadow.h"
#include "blurhelper/windowblur.h"
#include "windowhelper.h"
#include "newiconitem.h"
#include "wheelhandler.h"
#include "qqmlsortfilterproxymodel.h"

#include "desktop/menupopupwindow.h"

#include <QDebug>
#include <QQmlEngine>
#include <QQuickStyle>

void MatsyaUI::initializeEngine(QQmlEngine *engine, const char *uri)
{
    Q_ASSERT(QLatin1String(uri) == QLatin1String("MatsyaUI"));

    // Set base URL to the plugin URL
    engine->setBaseUrl(baseUrl());

    // For system icons
    engine->addImageProvider(QStringLiteral("icontheme"), new IconThemeProvider());
}

void MatsyaUI::registerTypes(const char *uri)
{
    Q_ASSERT(QLatin1String(uri) == QLatin1String("MatsyaUI"));

    qmlRegisterSingletonType<ThemeManager>("MatsyaUI.Core", 1, 0, "ThemeManager", [](QQmlEngine *engine, QJSEngine *scriptEngine) -> QObject * {
        Q_UNUSED(engine)
        Q_UNUSED(scriptEngine)
        return new ThemeManager;
    });

    qmlRegisterType<WindowShadow>(uri, 1, 0, "WindowShadow");
    qmlRegisterType<WindowBlur>(uri, 1, 0, "WindowBlur");
    qmlRegisterType<WindowHelper>(uri, 1, 0, "WindowHelper");
    qmlRegisterType<NewIconItem>(uri, 1, 0, "IconItem");
    qmlRegisterType<MenuPopupWindow>(uri, 1, 0, "MenuPopupWindow");
    qmlRegisterType<WheelHandler>(uri, 1, 0, "WheelHandler");
    qmlRegisterType<QQmlSortFilterProxyModel>(uri, 1, 0, "SortFilterProxyModel");

    qmlRegisterSingletonType(componentUrl(QStringLiteral("MTheme.qml")), uri, 1, 0, "MTheme");
    qmlRegisterSingletonType(componentUrl(QStringLiteral("Theme.qml")), uri, 1, 0, "Theme");
    qmlRegisterSingletonType(componentUrl(QStringLiteral("Units.qml")), uri, 1, 0, "Units");

    qmlRegisterType(componentUrl(QStringLiteral("MatsyaIconButton.qml")), uri, 1, 0, "Matsyabutton");
    qmlRegisterType(componentUrl(QStringLiteral("Matsyaslider.qml")), uri, 1, 0, "Matsyaslider");
    qmlRegisterType(componentUrl(QStringLiteral("Hideable.qml")), uri, 1, 0, "Hideable");
    qmlRegisterType(componentUrl(QStringLiteral("VerticalDivider.qml")), uri, 1, 0, "VD");
    qmlRegisterType(componentUrl(QStringLiteral("HowerColor.qml")), uri, 1, 0, "HWC");
    qmlRegisterType(componentUrl(QStringLiteral("mprisfullview.qml")), uri, 1, 0, "MFV");
    qmlRegisterType(componentUrl(QStringLiteral("HorizontalDivider.qml")), uri, 1, 0, "HorizontalDivider");
    qmlRegisterType(componentUrl(QStringLiteral("RoundedItem.qml")), uri, 1, 0, "RoundedItem");
    qmlRegisterType(componentUrl(QStringLiteral("Scrollable.qml")), uri, 1, 0, "Scrollable");
    qmlRegisterType(componentUrl(QStringLiteral("PairDialog.qml")), uri, 1, 0, "PairDialog");



    qmlRegisterType(componentUrl(QStringLiteral("AboutDialog.qml")), uri, 1, 0, "AboutDialog");
    qmlRegisterType(componentUrl(QStringLiteral("ActionTextField.qml")), uri, 1, 0, "ActionTextField");
    qmlRegisterType(componentUrl(QStringLiteral("BusyIndicator.qml")), uri, 1, 0, "BusyIndicator");
    qmlRegisterType(componentUrl(QStringLiteral("Icon.qml")), uri, 1, 0, "Icon");
    qmlRegisterType(componentUrl(QStringLiteral("PopupTips.qml")), uri, 1, 0, "PopupTips");
    qmlRegisterType(componentUrl(QStringLiteral("RoundedRect.qml")), uri, 1, 0, "RoundedRect");
    qmlRegisterType(componentUrl(QStringLiteral("TabBar.qml")), uri, 1, 0, "TabBar");
    qmlRegisterType(componentUrl(QStringLiteral("TabButton.qml")), uri, 1, 0, "TabButton");
    qmlRegisterType(componentUrl(QStringLiteral("TabCloseButton.qml")), uri, 1, 0, "TabCloseButton");
    qmlRegisterType(componentUrl(QStringLiteral("TabView.qml")), uri, 1, 0, "TabView");
    qmlRegisterType(componentUrl(QStringLiteral("Toast.qml")), uri, 1, 0, "Toast");
    qmlRegisterType(componentUrl(QStringLiteral("Window.qml")), uri, 1, 0, "Window");
    qmlRegisterType(componentUrl(QStringLiteral("RoundImageButton.qml")), uri, 1, 0, "RoundImageButton");
    qmlRegisterType(componentUrl(QStringLiteral("DesktopMenu.qml")), uri, 1, 0, "DesktopMenu");

    qmlProtectModule(uri, 1);
}

QUrl MatsyaUI::componentUrl(const QString &fileName) const
{
    return QUrl(QStringLiteral("qrc:/matsyaui/kit/") + fileName);
}
