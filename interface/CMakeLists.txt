project(libplugintestcore)
 
set(plugintestcore_SRCS
    plugin.cpp
    pluginloader.cpp
)
 
kde4_add_library(plugintestcore SHARED ${plugintestcore_SRCS})
 
target_link_libraries(plugintestcore ${KDE4_KDEUI_LIBS} )
 
install(TARGETS plugintestcore ${INSTALL_TARGETS_DEFAULT_ARGS})
 
set(plugintestcore_HDRS
    plugin.h
    plugintest_macros.h
)
 
install(FILES ${plugintestcore_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/plugintest)
install(FILES plugintest_plugin.desktop DESTINATION ${SERVICETYPES_INSTALL_DIR})
