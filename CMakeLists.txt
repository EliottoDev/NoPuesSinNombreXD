cmake_minimum_required(VERSION 3.19)
project(TheGame)

set(CMAKE_CXX_STANDARD 20)


add_executable(TheGame main.cpp Entities/Player.cpp Entities/Player.h Entities/Entity.cpp Entities/Entity.h Utils/Location.cpp Utils/Location.h Utils/Texture.cpp Utils/Texture.h Utils/Health.cpp Utils/Health.h Utils/Flag.cpp Utils/Flag.h Entities/EntityType.cpp Entities/EntityType.h Entities/EntityFlag.cpp Entities/EntityFlag.h)