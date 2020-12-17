#include <stdio.h>
#include <iostream>
#include "c/storage/StorageMain.c"
#include "c/storage/Support.c"
#include "c/operator/OperatorMain.c"
#include "c/array/ArrayMain.c"
#include "c/enum/EnumMain.c"
#include "c/c_point/CPointMain.c"
#include "c/c_point/MethodPoint.c"
#include "c/strings/CStringMain.c"
#include "c/struct/CStructMain.c"
#include "c/union/CUnionMain.c"
#include "c/typedef/CTypeDefMain.c"
#include "c/io/CioMain.c"
#include "c/filereadwrite/FileReadWrite.c"
#include "c/predefinedProcessor/CProcessorMain.c"
#include "c/header/Header.h"
#include "c/errorDealwith/ErrorDealWith.c"
#include "c/recursion/RecursionMain.c"
#include "c/variableParameters/VariableParametersMain.c"
#include "c/cache/CacheManagerMain.c"
#include "c/commentLineParam/CCommentLineParamMain.c"
#include "c/sortingAlgorithm/CSortingAlgorithmMain.c"

using namespace std;

//声明函数 调用C++程序
extern void CppMain();

int main(int argc, char *argv[]) {
    CppMain();

//    //函数调用
//    func(20);
//
//    //存储类
//    StorageMain();

    //运算符
//    OperatorMain();

    //数组
//    ArrayMain();

    //枚举
//    EnumMain();

    //指针
//    CPointMain();

    //函数指针
//    MethodPointMain();

    //回调函数
//    CallMethodMain();

    //字符串
//    CStringMain();

    //结构体、位域
//    CStructMain();

    //共用体
//    CUnionMain();

    //typedef
//    CTypeDefMain();

    //输入输出
//    CIoMain();

    //文件读取
//    FileReadWriteMain();

    //预定义处理器
//    ProcessorMain();

    //C的错误处理
//    ErrorDealWith();

    //递归
//    RecursionMain();

    //可变参数
//    VariableParametersMain();

    //C内存管理
//    CacheManagerMain();

    //C命令行参数
//    const char *args[255]={"testing1","testing2"};
//    CCommentLineParamMain(3, const_cast<char **>(args));
//    CCommentLineParamMain(2, const_cast<char **>(args));
//    CCommentLineParamMain(1, const_cast<char **>(args));

    //冒泡排序
//    CSortingAlgorithmMain();

    return 0;
}


