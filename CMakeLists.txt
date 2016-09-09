cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# Enable C++11 support
set(CMAKE_CXX_STANDARD 11)

# Enable generating compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Make sure we can include from inc/
include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/inc
)

# Build an executable named  "clang-tidy-example"
add_executable(clang-tidy-example
	src/main.cpp
	src/processor.cpp
)
