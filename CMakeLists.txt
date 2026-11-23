cmake_minimum_required(VERSION 3.16)
project(rob-run-cash-routes CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robruncashroutes
    src/main.cpp
    src/routes.cpp
    src/tracker.cpp
    src/stats.cpp
)

target_include_directories(robruncashroutes PRIVATE include)

if(WIN32)
    target_link_libraries(robruncashroutes PRIVATE userenv)
endif()
