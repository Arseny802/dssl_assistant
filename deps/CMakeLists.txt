cmake_minimum_required(VERSION 3.15)

execute_process(COMMAND git submodule update --init --recursive)

add_subdirectory(hare)
add_subdirectory(cmrc)
add_subdirectory(cpr)
add_subdirectory(tgbot-cpp)