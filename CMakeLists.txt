cmake_minimum_required(VERSION 3.5)
project(on1four_application VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(BUILD_EDITOR OFF)

add_subdirectory(engine)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} on1four_engine)
target_include_directories(${PROJECT_NAME} PRIVATE on1four_engine)

set(SOURCES
	src/application_layer.cpp
)

#file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp,${PROJECT_SOURCE_DIR}/src/*/*.cpp, ${PROJECT_SOURCE_DIR}/src/*/*/*.cpp )


target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE

)

