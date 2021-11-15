cmake_minimum_required(VERSION 3.0)

set(ObjName mytest)

project(${ObjName})


include_directories(include) #包含include文件夹中的头文件

aux_source_directory(src SRC_LIST)  #将src文件夹下的源文件纳入到变量SRC_LIST中

add_executable(${ObjName} main.cpp ${SRC_LIST}) 