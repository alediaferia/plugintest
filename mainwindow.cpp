 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#include "mainwindow.h"
#include "interface/pluginloader.h"
#include "interface/plugin.h"

#include <KTextEdit>
#include <KDebug>
#include <kxmlguifactory.h>

MainWindow::MainWindow(QWidget *parent) : KXmlGuiWindow(parent)
{
    editor = new KTextEdit(this);
    // Here we set the object name for plugin purposes
    editor->setObjectName("Plugintest::EditorInterface");

    setCentralWidget(editor);

    setupGUI();

    loadPlugins();
}

void MainWindow::loadPlugins()
{
    pluginLoader = new PluginLoader(this);
    connect(pluginLoader, SIGNAL(pluginCreated(Plugin *)), SLOT(addPlugin(Plugin *)));
    pluginLoader->loadAllPlugins();
}

void MainWindow::addPlugin(Plugin * plugin)
{
    guiFactory()->addClient(plugin);
}
