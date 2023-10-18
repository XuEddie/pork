cmake_minimum_required(VERSION 3.24)

project(pork_vision)

set(CMAKE_CXX_STANDARD 17)

set(OpenCV_DIR "D:\\OpenCV\\opencv\\mingw_build\\install")#请修改此处的地址。

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

#以下部分为Qt部分的cmakelist，需要的人请解除注释。
##############################################################################
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)
#set(CMAKE_AUTOUIC ON)

#find_package(Qt5 COMPONENTS
#        Core
#        Gui
#        Widgets
#        REQUIRED)
#
###############################################################################
include_directories(
        UI_part
        vision_parts
        AI_part
)
add_executable(pork_vision main.cpp
        vision_parts/recognize_part.cpp
        vision_parts/recognize_part.h
        UI_part/UI_widgets.cpp
        UI_part/UI_widgets.h
        UI_part/UI_VirtualBase.cpp
        UI_part/UI_VirtualBase.h
        vision_parts/recognize_part_VirtualBase.cpp
        vision_parts/recognize_part_VirtualBase.h
        AI_part/AI_part_VirtualBase.cpp
        AI_part/AI_part_VirtualBase.h
        vision_parts/study_part.cpp
        vision_parts/study_part.h
        vision_parts/study_part_VirtualBase.cpp
        vision_parts/study_part_VirtualBase.h
        UI_part/Mat_list.cpp
        UI_part/Mat_list.h
        AI_part/AL_part.cpp
        AI_part/AL_part.h
)

target_link_libraries(pork_vision ${OpenCV_LIBS})
###############################################################################
#target_link_libraries(pork_vision
#        Qt5::Core
#        Qt5::Gui
#        Qt5::Widgets
#)
#
#if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
#    set(DEBUG_SUFFIX)
#    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
#        set(DEBUG_SUFFIX "d")
#    endif ()
#    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
#    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        endif ()
#    endif ()
#    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E make_directory
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#    endif ()
#    foreach (QT_LIB Core Gui Widgets)
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
#    endforeach (QT_LIB)
#endif ()
###############################################################################