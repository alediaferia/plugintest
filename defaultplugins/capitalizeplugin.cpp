 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/ 

#include "capitalizeplugin.h"
#include "plugintest_macros.h"

#include <KAction>
#include <KGenericFactory>
#include <KLocale>
#include <KActionCollection>
#include <KTextEdit>

// K_EXPORT_COMPONENT_FACTORY( plugintest_capitalize,
//                             KGenericFactory<CapitalizePlugin>( "plugintest_capitalize" ) )

PLUGINTEST_PLUGIN_EXPORT(CapitalizePlugin)

CapitalizePlugin::CapitalizePlugin(QObject *parent, const QVariantList & args) : Plugin(parent)
{
//     setInstance(KGenericFactory<CapitalizePlugin>::instance());
    setXMLFile("plugintest_capitalizeui.rc");

    action = actionCollection()->addAction("capitalize_words");
    action->setText(i18n("Capitalize Words"));
    connect(action, SIGNAL(triggered()), this, SLOT(slotCapitalize()));
}

void CapitalizePlugin::slotCapitalize()
{
    QString text = editorInterface()->toPlainText();
    for ( int i=0; i != -1; ) {
        /*text.at(i) = */text.at(i).toUpper();
        i = text.indexOf( QRegExp("\\b\\w"), i+1 );
    }

    editorInterface()->setText(text);
}
