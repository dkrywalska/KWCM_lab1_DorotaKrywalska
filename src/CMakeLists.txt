cmake_minimum_required(VERSION 2.8)
project (PierwszyProgram)
add_executable(Laborka main.cpp)

if (USE_TRIGONOMETRY_DEGREE)
	include_directories("${PROJECT_SOURCE_DIR}/Trygonometria")
	add_subdirectory(Trygonometria)
	target_link_libraries (Laborka Trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)

option (USE_TRIGONOMETRY_DEGREE 
"Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)

configure_file(
"${PROJECT_SOURCE_DIR}/LaborkaConfig.h.in"
"${PROJECT_SOURCE_DIR}/LaborkaConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")
