#include <stdio.h>
//
// Created by zhangshuai on 2020/12/14. 
// Email：zhangshuai@dushu.io
// 

//只有当一个变量是一个全局变量时，extern变量才会起作用
int num = 5;

//函数声明
int add(int x, int y);

//不可变常量值
extern const int x = add(5, 5);

void func(const char *from) {
    printf("func ExternCpp.cpp: %s\n", from);
}

int add(int x, int y) {
    return x + y;
}