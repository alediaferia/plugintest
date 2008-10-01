#include "exampleplugin.h"
#include "plugintest_macros.h"

using namespace Plugintest;

PLUGINTEST_PLUGIN_EXPORT(ExamplePlugin)

ExamplePlugin::ExamplePlugin(QObject * parent, const QVariantList & args)
  : Plugin(parent)
{
}

ExamplePlugin::~ExamplePlugin()
{}
