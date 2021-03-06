cmake_minimum_required(VERSION 2.8)
project(RBot_Simulator)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

# Find LibXml2 library
# find_package(LibXml2 2.6.0 REQUIRED)

# Find Armadillo library
# find_package(Armadillo REQUIRED)

# The Google Glog_Pack library.
# Store the glog include directory in GLOG_INCLUDE_DIR.
# The PATHS variable may be specified to give hints for where to find logging.h
#find_path(GLOG_INCLUDE_DIR
#  NAMES logging.h
#  PATHS /usr/local/include/glog /usr/local/include/ /usr/include/glog/ /usr/include/
#)

#if(GLOG_INCLUDE_DIR)
#        message(STATUS "Found GLog include directory")
#else()
#        message(STATUS "ERROR: Could not find GLog include directory")
#endif()

# Find libmlpack.so (or equivalent) and store it in MLPACK_LIBRARY.
# If this example script were smarter, it would also find other dependencies of mlpack and store them in
# an MLPACK_LIBRARIES variable instead.
#find_library(GLOG_LIBRARY
#  NAMES glog libglog
#  PATHS /usr/lib64/ /usr/lib/ /usr/local/lib64/ /usr/local/
#)

#if(GLOG_LIBRARY)
#        message(STATUS "Found GLog link libraries")
#else()
#        message(STATUS "ERROR: Could not find GLog link libraries")
#endif()

# Define the framework files.
set(SRC
	src/main.cpp
	src/Pose.cpp
	src/Robot.cpp
	src/Simulator.cpp
)

set(HDRs
	include/Pose.h
	include/Robot.h
	include/Simulator.h
	include/Types.h
)

include_directories (
	include/
#        ${GLOG_INCLUDE_DIR}
#	${LIBXML2_INCLUDE_DIR}
#	${ARMADILLO_INCLUDE_DIRS}
#        ${BOOST_INCLUDE_DIR}
#        ${THREADS_INCLUDE_DIR}
)

add_executable(${PROJECT_NAME} ${SRC} ${HDRs})

target_link_libraries(${PROJECT_NAME} 
#        ${GLOG_LIBRARY}
#		${LIBXML2_LIBRARIES}
#       ${BOOST_LIBRARY}
#        ${THREADS_LIBRARY}
)