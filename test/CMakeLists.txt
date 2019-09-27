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
  
  FILE(GLOB Mocks ${PROJECT_SOURCE_DIR}/test/mocks/*.hpp)
  
  ##############
  # Unit Tests
  ##############
  add_executable(blockTests BlockTests.cpp ${Mocks})
  target_include_directories(blockTests PRIVATE ${gtest_SOURCE_DIR}/include 
                                                ${gtest_SOURCE_DIR}
                                                ${PROJECT_SOURCE_DIR}/src/interface/
                                                ${PROJECT_SOURCE_DIR}/test/mocks/)  
 


  # Standard linking to gtest stuff.
  target_link_libraries(blockTests gmock gmock_main)

  # Extra linking for the project.
  target_link_libraries(blockTests GenericIoTStack)
    
endif()
