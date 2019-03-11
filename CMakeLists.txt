cmake_minimum_required(VERSION 3.13)
project(GameTest)

set(CMAKE_CXX_STANDARD 17)

set (CMAKE_CXX_FLAGS "-lSDL2")

add_executable(GameTest source/main.cpp source/engine/graph/GameWindow.cpp source/engine/graph/GameWindow.h source/engine/GameEngine.cpp source/engine/GameEngine.h source/engine/GameLogicInterface.h source/engine/GameLogic.cpp source/engine/GameLogic.h source/engine/graph/sprite/ImageUtils.cpp source/engine/graph/sprite/ImageUtils.h)