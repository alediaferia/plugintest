#include <kdemacros.h>
#include <KPluginFactory>
#include <KPluginLoader>

#define PLUGINTEST_PLUGIN_EXPORT( c ) \
  K_PLUGIN_FACTORY( PlugintestFactory, registerPlugin< c >(); ) \
  K_EXPORT_PLUGIN( PlugintestFactory("c") ) 

#define PLUGINTEST_EXPORT __attribute__ ((visibility("default")))
