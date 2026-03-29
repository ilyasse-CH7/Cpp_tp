cmake_minimum_required(VERSION 3.28)

project(Ilyasse_Cpp_Projects CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Scanner tous les fichiers .cpp (dans Tp1 et sous-dossiers)
file(GLOB_RECURSE ALL_SOURCES "Tp1/**/*.cpp" "Tp1/*.cpp" "*.cpp")

foreach(source_file ${ALL_SOURCES})

    if(NOT source_file MATCHES "cmake-build")   # ignore build folder

        # Nom de l'exécutable = nom du fichier sans extension
        get_filename_component(exe_name ${source_file} NAME_WE)

        # Créer un exécutable **avec un seul fichier source**
        add_executable(${exe_name} ${source_file})

    endif()

endforeach()