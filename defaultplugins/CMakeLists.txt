project(capitalizeplugin)

set(capitalizeplugin_SRCS
    capitalizeplugin.cpp
)

kde4_add_plugin(plugintest_capitalizeplugin ${capitalizeplugin_SRCS})
target_link_libraries(plugintest_capitalizeplugin plugintestcore ${KDE4_KDEUI_LIBS} ${KDE4_KDCORE_LIBS})

install(TARGETS plugintest_capitalizeplugin DESTINATION ${PLUGIN_INSTALL_DIR})
install(FILES plugintest_capitalizeplugin.desktop DESTINATION ${SERVICES_INSTALL_DIR})
install(FILES plugintest_capitalizepluginui.rc DESTINATION ${DATA_INSTALL_DIR}/plugintest_capitalize)
