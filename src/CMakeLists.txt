cmake_minimum_required (VERSION 3.8)

#project(${PROJECT_NAME})

FILE(GLOB CommonSrc ${PROJECT_SOURCE_DIR}/src/common/src/*.cpp)
FILE(GLOB CommonInc ${PROJECT_SOURCE_DIR}/src/common/inc/*.hpp)
FILE(GLOB ClientSrc ${PROJECT_SOURCE_DIR}/src/client/src/*.cpp)
FILE(GLOB ClientInc ${PROJECT_SOURCE_DIR}/src/client/inc/*.hpp)
FILE(GLOB ServerSrc ${PROJECT_SOURCE_DIR}/src/server/src/*.cpp)
FILE(GLOB ServerInc ${PROJECT_SOURCE_DIR}/src/server/inc/*.hpp)
FILE(GLOB InterfaceInc ${PROJECT_SOURCE_DIR}/src/interface/*.hpp)

#add_library(GenericIoTStackCommon STATIC ${CommonSrc})
add_library(GenericIoTStack STATIC ${ClientSrc}
                                   ${ClientInc}
	                                 ${CommonSrc}
                                   ${CommonInc}
								                   ${ServerSrc}
                                   ${ServerInc}
                                   ${InterfaceInc})

                                  
target_include_directories(GenericIoTStack PRIVATE "client/inc/"
					                                         "common/inc/"
					                                         "interface/")

