cmake_minimum_required(VERSION 3.25)
project(QFontTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
add_executable(QFontTest main.cpp)
target_link_libraries(QFontTest Qt::Core Qt::Gui Qt::Widgets)
target_compile_definitions(QFontTest PRIVATE QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII QT_DISABLE_DEPRECATED_BEFORE=0x070000)
