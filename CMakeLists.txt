cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME engine)

project(${PROJECT_NAME} C CXX)


set(CMAKE_CXX_STANDARD 17)

set(APP_DIR "${CMAKE_CURRENT_LIST_DIR}")
set(PACKAGE_DIR "${CMAKE_CURRENT_LIST_DIR}/packages")
set(SDL2_PATH "${PACKAGE_DIR}/sdl")
set(EXECUTABLE_OUTPUT_PATH "${APP_DIR}/build")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${APP_DIR}/include/")

find_package(GLM REQUIRED)
find_package(SDL2 REQUIRED)

file(GLOB_RECURSE SOURCE_FILES 
 ${APP_DIR}/src/*.c
 ${APP_DIR}/src/*.cpp)
 
file(GLOB_RECURSE HEADER_FILES 
 ${APP_DIR}/src/headers/*.h
 ${APP_DIR}/src/headers/*.hpp)


include_directories(
	"${APP_DIR}/src"
	"${PACKAGE_DIR}"
	${SDL2_INCLUDE_DIR}
)


add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})


target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})