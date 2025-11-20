
cmake_minimum_required (VERSION 3.8)

set(SOURCES
    src/UNIT_SCALES.cpp
    )

add_library(MiniScales)

target_sources(MiniScales PRIVATE ${SOURCES})
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SOURCES}) # VS include directories

if (LINUX)
    target_link_libraries(MiniScales PUBLIC lgpio) 
else()
endif()

target_include_directories(MiniScales PUBLIC "src")