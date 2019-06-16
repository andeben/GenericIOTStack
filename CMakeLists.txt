cmake_minimum_required(VERSION 3.8)

# Options. Turn off with 'cmake -Dmyvarname=OFF'.
option(test "Build all tests." ON) # Makes boolean 'test' available.

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
project(GenericIotStack VERSION 1.0.1 DESCRIPTION "Simple Genric IoT Stack lib")

set(CMAKE_CXX_FLAGS "-g -Wall")

# for MSVC
if(MSVC)
  set(variables 
    CMAKE_CXX_FLAGS_DEBUG
    CMAKE_CXX_FLAGS_RELEASE
	CMAKE_CXX_FLAGS_RELWITHDEBINFO
	CMAKE_CXX_FLAGS_MINSIZEREL
  )
  foreach(variable ${variables})
	if(${variable} MATCHES "/MD")
	  string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
	endif()
  endforeach()
endif()

add_subdirectory(src)
add_subdirectory(test)

# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
# set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
