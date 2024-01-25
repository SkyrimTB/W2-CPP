cmake_minimum_required(VERSION 3.5.0)
project(GradingTest VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
include(CTest)
enable_testing()

add_executable(Pascal pascal.cpp)
add_executable(PascalOldFashioned  pascal_old_fashioned.cpp)
add_executable(Performance Performance.cpp)
add_executable(Performance2 Performance2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
