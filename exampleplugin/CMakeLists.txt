project(exampleplugin)

set(exampleplugin_SRCS
    exampleplugin.cpp
)

kde4_add_plugin(plugintest_exampleplugin ${exampleplugin_SRCS})
target_link_libraries(plugintest_exampleplugin plugintestcore ${KDE4_KDEUI_LIBS})

install(TARGETS plugintest_exampleplugin DESTINATION ${PLUGIN_INSTALL_DIR})
install(FILES plugintest_exampleplugin.desktop DESTINATION ${SERVICES_INSTALL_DIR})