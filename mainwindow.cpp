 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#include "mainwindow.h"
#include "interface/plugin.h"

#include <KTextEdit>
#include <KServiceTypeTrader>
#include <KDebug>
#include <kxmlguifactory.h>

MainWindow::MainWindow(QWidget *parent) : KXmlGuiWindow(parent)
{
    editor = new KTextEdit(this);
    // Here we set the object name for plugin purposes
    editor->setObjectName("Plugintest::EditorInterface");

    setCentralWidget(editor);

    setupGUI();
}

void MainWindow::loadPlugins()
{
    KService::List offers = KServiceTypeTrader::self()->query("Plugintest/Plugin");

    KService::List::const_iterator iter;
    for(iter = offers.begin(); iter < offers.end(); ++iter)
    {
       QString error;
       KService::Ptr service = *iter;

       Plugintest::Plugin *plugin = KService::createInstance<Plugintest::Plugin>(service, this, QVariantList(), &error);

       if (plugin) {
           guiFactory()->addClient(plugin);
       } else {
           kDebug()<<error;
       }
    }
}
