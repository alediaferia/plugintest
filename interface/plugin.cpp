 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/
#include "plugin.h"
#include <KTextEdit>

class Plugin::PluginPrivate {

public:
    PluginPrivate(Plugin *q):
                  q(q),
                  m_editor(0){}

    Plugin *q;
    KTextEdit *m_editor;
};

Plugin::Plugin(QObject *parent) : QObject(parent),
                                  d(new PluginPrivate(this))
{}

Plugin::~Plugin()
{}

KTextEdit* Plugin::editorInterface()
{
    return d->m_editor;
}

void Plugin::setEditorInterface(KTextEdit *editor)
{
    d->m_editor = editor;
}
