 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#ifndef CAPITALIZEPLUGIN_H
#define CAPITALIZEPLUGIN_H

#include "plugin.h"

#include <QVariantList>

class KAction;

class CapitalizePlugin : public Plugin
{
    Q_OBJECT

    public:
        CapitalizePlugin(QObject *parent, const QVariantList &args);
        ~CapitalizePlugin();

    protected slots:
        void slotCapitalize();

    private:
        KAction *action;
};

#endif 
