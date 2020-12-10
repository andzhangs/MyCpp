#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
//
// Created by zhangshuai on 2020/12/9. 
// Contact by zhangshuai@dushu.io
// 可变参数
//1、定义一个函数，最后一个参数为省略号，省略号前面可以设置自定义参数。
//2、在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
//3、使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
//4、使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
//5、使用宏 va_end 来清理赋予 va_list 变量的内存。


double average(int arg, int num, ...) {
    va_list vaList;
    double sum = 0.0;
    int i;

    //为num个参数初始化valist;
    va_start(vaList, num);

    //访问所有赋给valist的参数
    for (i = 0; i < num; i++) {
        sum += va_arg(vaList, int);
    }

    //清理为valise保留的内存
    va_end(vaList);
    return (sum / num) + arg;
}

void VariableParametersMain(void) {
    printf("Average of 2, 3, 4, 5 = %f\n", average(5, 4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(5, 3, 5, 10, 15));
}

