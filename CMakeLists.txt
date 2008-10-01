project(plugintest)

find_package(KDE4 REQUIRED)
include_directories(
   ${KDE4_INCLUDES}
   ${CMAKE_SOURCE_DIR}
   ${CMAKE_CURRENT_BINARY_DIR}
   interface/
)

add_subdirectory(defaultplugins)

set(plugintest_SRCS
    main.cpp
    mainwindow.cpp
    interface/plugin.cpp
)

kde4_add_executable(plugintest ${plugintest_SRCS})
target_link_libraries(plugintest ${KDE4_KDEUI_LIBS} ${KDE4_KDECORE_LIBS})
# for plugintestcore have a look under interface/

add_subdirectory(exampleplugin)

install(FILES interface/plugintest_plugin.desktop DESTINATION ${SERVICETYPES_INSTALL_DIR})
install(TARGETS plugintest ${INSTALL_TARGETS_DEFAULT_ARGS})

