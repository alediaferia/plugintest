#include "exampleplugin.h"
#include <plugintest_macros.h>

#include <KAction>
#include <KActionCollection>
#include <KLocale>

PLUGINTEST_PLUGIN_EXPORT(ExamplePlugin)

ExamplePlugin::ExamplePlugin(QObject * parent, const QVariantList & args)
  : Plugin(parent)
{

    KAction *example = new KAction(this);
    example->setText(i18n("Example Plugin"));
    actionCollection()->addAction("exampleplugin", example);

    setXMLFile("exampleplugin/examplepluginui.rc");
}

ExamplePlugin::~ExamplePlugin()
{}
