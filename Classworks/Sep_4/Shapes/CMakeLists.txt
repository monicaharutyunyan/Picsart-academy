cmake_minimum_required(VERSION 3.25)
project(homework)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_executable(homework src/main.cpp
								src/Shape.cpp
								src/Circle.cpp
								src/Square.cpp
								src/Triangle.cpp
								includes/Shape.h
								includes/Circle.h
								includes/Square.h
								includes/Triangle.h)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(homework ${OpenCV_LIBS})
