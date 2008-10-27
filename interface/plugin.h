 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#ifndef PLUGINTEST_PLUGIN_H
#define PLUGINTEST_PLUGIN_H

#include "plugintest_macros.h"

#include <kxmlguiclient.h>
#include <QObject>

class KTextEdit;

/** \class Plugin Plugin.h
 * \brief Plugintest's Base Plugin Class
 *
 * This is the base class for every plugin in Plugintest.
 */

class KDE_EXPORT Plugin : public QObject , public KXMLGUIClient
{
    Q_OBJECT

    public:
        Plugin(QObject *parent);
        virtual ~Plugin();

        KTextEdit* editorInterface();
        void setEditorInterface(KTextEdit *);

    private:
        class PluginPrivate;
        PluginPrivate *d;

};

#endif
