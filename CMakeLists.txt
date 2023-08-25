cmake_minimum_required(VERSION 3.10.2)
project (addcmake)
add_executable(addcmake main.c add.c)
install(TARGETS addcmake RUNTIME DESTINATION bin)

