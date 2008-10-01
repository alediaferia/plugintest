 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/
#include "plugin.h"
#include <KTextEdit>

Plugin::Plugin(QObject *parent) : QObject(parent)
{}

Plugin::~Plugin()
{}

KTextEdit* Plugin::editorInterface()
{
    return parent()->parent()->findChild<KTextEdit *>("Plugintest::EditorInterface");//FIXME: Nice code :D
}
