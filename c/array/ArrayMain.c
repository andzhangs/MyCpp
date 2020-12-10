#include <stdio.h>
#include <stdlib.h>
//
// Created by 张帅 on 2020/11/3.
// 数组

void ArrayMain(void) {
    int n[10]; //n是包含一个长度为10的整数的数组
    int i, j;
    //初始化数组元素
    for (i = 0; i < 10; i++) {
        n[i] = i + 100; //设置元素i的值为1+100;
    }
    //输出数组中每个元素的值
    for (j = 0; j < 10; j++) {
        printf("输出第%d个，值为：%d\n",j,n[j]);
    }
}


