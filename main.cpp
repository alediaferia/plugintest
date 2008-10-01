 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/ 

#include <KApplication>
#include <KAboutData>
#include <KCmdLineArgs>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    KAboutData aboutData("plugintest", 0,
        ki18n("Plugin Test"), "1.0",
        ki18n("A Plugin Test Application"),
        KAboutData::License_GPL,
        ki18n("Copyright (c) 2008 Alessandro Diaferia"));

    KCmdLineArgs::init( argc, argv, &aboutData );

    KApplication app;

    MainWindow *window = new MainWindow();
    window->show();

    return app.exec();
}
