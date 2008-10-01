 /* This file is part of the KDE project

   Copyright (C) 2008 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <KXmlGuiWindow>
class KTextEdit;

class MainWindow : public KXmlGuiWindow
{
    Q_OBJECT
    public:
        MainWindow(QWidget *parent = 0);

    protected:
        void loadPlugins();

    private:
        KTextEdit *editor;



};

#endif 
