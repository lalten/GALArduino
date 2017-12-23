project(galarduino)
cmake_minimum_required(VERSION 3.3.1)

# set(CMAKE_VERBOSE_MAKEFILE on)

set(USB_PRODUCT "Galarduino")


include_directories(
)

add_executable(${CMAKE_PROJECT_NAME}
  ${CMAKE_SOURCE_DIR}/src/arduino_main.cpp
	)


include(${CMAKE_SOURCE_DIR}/platforms/esp8266.cmake)
