cmake_minimum_required(VERSION 3.8)

set(APP_NAME "EffectiveCpp" CACHE STRING "Project Name")
project(${APP_NAME} CXX)

include(${CMAKE_CURRENT_LIST_DIR}/001/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/002/CMakeLists.txt)
