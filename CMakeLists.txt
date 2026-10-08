cmake_minimum_required(VERSION 3.20)
project(JeuEnCpp LANGUAGES CXX)

# Standard C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Liste des fichiers sources
set(SOURCES
    src/main.cpp
    src/Game.cpp
)

# Création de l'exécutable
add_executable(${PROJECT_NAME} ${SOURCES})

# Indique où trouver les fichiers .hpp
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Avertissements stricts du compilateur
if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()