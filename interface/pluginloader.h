/* This file is part of the KDE project

   Copyright (C) 2008 Dario Freddi <drf54321@yahoo.it>
                 2008 Lukas Appelhans <l.appelhans@gmx.de>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#ifndef PLUGINTESTPLUGINLOADER_H
#define PLUGINTESTPLUGINLOADER_H

#include <QObject>

#include "plugintest_macros.h"

class Plugin;

class PluginLoader : public QObject
{
    Q_OBJECT
    public:
        PluginLoader(QObject * parent);
        virtual ~PluginLoader();

        void loadAllPlugins();

    signals:
        void pluginCreated(Plugin * plugin);
};

#endif
