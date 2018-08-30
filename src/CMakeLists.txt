cmake_minimum_required ( VERSION 3.0.2 )

project ( Tetris )

# Fetch all source and header files
file(GLOB_RECURSE source_list RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.cpp" "*.hpp" "*.h" "*.c" "*.vert" "*.frag" "*.glsl")

# Remove specific files
#list(FILTER source_list EXCLUDE REGEX "binary_to_compressed_c.cpp") 

add_executable ( Tetris ${source_list})

set_property(TARGET Tetris PROPERTY CXX_STANDARD 11)
set_property(TARGET Tetris PROPERTY CXX_STANDARD_REQUIRED ON)

# Make the Tetris project the start project in the solution
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Tetris)

#assign_source_group(${SOURCE_CODE})
assign_source_group(${source_list})

target_link_libraries(Tetris glfw)
#target_link_libraries(IMPEngine tbb)

