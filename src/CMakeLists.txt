set(INCLUDES "")
add_subdirectory(lib1)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} lib1)

include_directories(lib1/include)
