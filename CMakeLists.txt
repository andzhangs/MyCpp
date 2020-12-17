cmake_minimum_required(VERSION 3.17)
project(MyCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyCpp main.cpp
        c/storage/StorageMain.c
        c/storage/Support.c
        c/operator/OperatorMain.c
        c/operator/OperatorH.h
        c/storage/SupportH.h
        c/array/ArrayMain.c
        c/enum/EnumMain.c
        c/c_point/CPointMain.c
        c/c_point/MethodPoint.c
        c/strings/CStringMain.c
        c/struct/CStructMain.c
        c/union/CUnionMain.c
        c/typedef/CTypeDefMain.c
        c/io/CioMain.c
        c/filereadwrite/FileReadWrite.c
        c/predefinedProcessor/CProcessorMain.c
        c/header/Header.h
        c/errorDealwith/ErrorDealWith.c
        c/recursion/RecursionMain.c
        c/variableParameters/VariableParametersMain.c
        c/cache/CacheManagerMain.c
        c/commentLineParam/CCommentLineParamMain.c
        c/sortingAlgorithm/CSortingAlgorithmMain.c
        cpp/ExternCPP.cpp
        cpp/CppMain.cpp
        cpp/RandomMainCpp.cpp
        cpp/RandomMainCpp.h
        cpp/ArrayMainCpp.cpp
        cpp/StringMainCpp.cpp
        cpp/PointerMainCpp.cpp
        cpp/ReferenceMainCpp.cpp
        cpp/DateAndTimeMainCpp.cpp cpp/IOMainCpp.cpp cpp/ClassAndObjectMainCpp.cpp cpp/ExtendMainCpp.cpp)