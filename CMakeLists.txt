cmake_minimum_required(VERSION 3.31)
project(LetterShifter)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/zerodots/Qt/6.9.0/gcc_64")

include_directories(include)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
find_package(Boost REQUIRED)

add_executable(LetterShifter src/main.cpp
        src/mainwindow.cpp
        include/mainwindow.h
        src/mainwindow.ui)
target_link_libraries(LetterShifter
        Qt::Core
        Qt::Gui
        Qt::Widgets
)
target_link_libraries(LetterShifter
    boost::boost
)

