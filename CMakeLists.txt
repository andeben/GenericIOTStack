cmake_minimum_required (VERSION 3.0)
project (GenericIOTStack)



FILE(GLOB CommonSrc ${PROJECT_SOURCE_DIR}/src/common/src/*.cpp)
FILE(GLOB ClientSrc ${PROJECT_SOURCE_DIR}/src/client/src/*.cpp)
FILE(GLOB ServerSrc ${PROJECT_SOURCE_DIR}/src/server/src/*.cpp)

#add_library(GenericIOTStackCommon ${CommonSrc})
add_library(GenericIOTStackClient ${ClientSrc})
#add_library(GenericIOTStackServer ${ServerSrc})


#target_include_directories(GenericIOTStackCommon PUBLIC "${PROJECT_SOURCE_DIR}/src/common/inc")
target_include_directories(GenericIOTStackClient PUBLIC "${PROJECT_SOURCE_DIR}/src/client/inc")
target_include_directories(GenericIOTStackClient PUBLIC "${PROJECT_SOURCE_DIR}/src/common/inc")
#target_include_directories(GenericIOTStackServer PUBLIC "${PROJECT_SOURCE_DIR}/src/server/inc")

