cmake_minimum_required(VERSION 3.23)
project(${CMAKE_PROJECT_NAME}.service VERSION 0.0.1)

find_package(Poco REQUIRED)

add_executable(${PROJECT_NAME} 
  src/main.cpp
)

target_link_libraries(${PROJECT_NAME} 
  ${CMAKE_PROJECT_NAME}.common
  Poco::Poco
)

add_subdirectory(tests)
