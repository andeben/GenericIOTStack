cmake_minimum_required (VERSION 3.8)

#project(${PROJECT_NAME})

# Testing
################################
if (test)
  # This adds another subdirectory, which has 'project(gtest)'
  add_subdirectory(./googletest)
	
  enable_testing()

  # Include the gtest library. gtest_SOURCE_DIR is available due to
  # 'project(gtest)' above.
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
  include_directories(${PROJECT_SOURCE_DIR}/src/interface/)
  include_directories(${PROJECT_SOURCE_DIR}/src/common/inc)
  include_directories(${PROJECT_SOURCE_DIR}/test/mocks/)
  FILE(GLOB Mocks ${PROJECT_SOURCE_DIR}/test/mocks/*.hpp)
  
  ##############
  # Unit Tests
  ##############
  add_executable(runTests test.cpp ${Mocks})

  # Standard linking to gtest stuff.
  target_link_libraries(runTests gmock gmock_main)

  # Extra linking for the project.
  target_link_libraries(runTests GenericIoTStack)
    
endif()
