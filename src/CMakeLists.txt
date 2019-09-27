cmake_minimum_required (VERSION 3.8)

#project(${PROJECT_NAME})

FILE(GLOB CommonSrc common/src/*.cpp)
FILE(GLOB CommonInc common/inc/*.hpp)
FILE(GLOB ClientSrc client/src/*.cpp)
FILE(GLOB ClientInc client/inc/*.hpp)
FILE(GLOB ServerSrc server/src/*.cpp)
FILE(GLOB ServerInc server/inc/*.hpp)
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

