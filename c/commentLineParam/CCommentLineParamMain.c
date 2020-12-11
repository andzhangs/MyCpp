#include <stdio.h>
//
// Created by zhangshuai on 2020/12/9. 
// Contact by zhangshuai@dushu.io
// C命令行参数

void CCommentLineParamMain(int argc, char *argv[]) {
    if (argc == 2) {
        printf("The argument supplied is %s\n", argv[0]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
}