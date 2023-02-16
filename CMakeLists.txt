
cmake_minimum_required (VERSION 3.8)

project ("Car")

# Add source to this project's executable.
add_executable (Car "Car.cpp" "Car.h" "Vehicle.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Car PROPERTY CXX_STANDARD 20)
endif()

