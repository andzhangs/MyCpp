cmake_minimum_required(VERSION 3.17)
project(MyCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyCpp main.cpp
        cpp/MethodUtils.cpp
        c/storage/StorageMain.c
        c/storage/Support.c
        c/operator/OperatorMain.c
        c/operator/OperatorH.h
        c/storage/SupportH.h
        c/array/ArrayMain.c c/enum/EnumMain.c c/c_point/CPointMain.c c/c_point/MethodPoint.c c/strings/CStringMain.c c/struct/CStructMain.c c/union/CUnionMain.c c/typedef/CTypeDefMain.c)