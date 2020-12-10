#include <stdio.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// 递归


//数的阶乘
double factorial(unsigned int i) {
    if (i <= 1) {
        printf("log...：%d\n", i);
        return 1;
    }
    printf("log：%d\n", i);
    return i * factorial(i - 1);
}

//斐波那契数列
int fibonaci(int i) {
    if (i == 0) {
        return 0;
    } else if (i == 1) {
        return 1;
    } else {
        return fibonaci(i - 1) + fibonaci(i - 2);
    }
}


void RecursionMain(void) {
    int i = 15;
    printf("%d 的阶乘为 %f\n", i, factorial(i));

    for (i = 0; i < 10; i++) {
        printf("%d\t\n", fibonaci(i));
    }
}