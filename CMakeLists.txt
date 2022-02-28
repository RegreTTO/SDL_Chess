cmake_minimum_required(VERSION 3.21)

project("sdl_chess")

SET(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(sdl_chess main.cpp Scripts/Figure/Figure.cpp Scripts/Figure/Figure.h Scripts/Field/Cell.cpp Scripts/Field/Cell.h Scripts/Figure/Bishop/Bishop.cpp Scripts/Figure/Bishop/Bishop.h Scripts/Figure/King/King.cpp Scripts/Figure/King/King.h Scripts/Figure/Knight/Knight.cpp Scripts/Figure/Knight/Knight.h Scripts/Figure/Pawn/Pawn.cpp Scripts/Figure/Pawn/Pawn.h Scripts/Figure/Queen/Queen.cpp Scripts/Figure/Queen/Queen.h Scripts/Figure/Rook/Rook.cpp Scripts/Figure/Rook/Rook.h)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})