#include <stdio.h>
#include <string.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// 公用体: 在相同的内存位置存储不同的数据类型
//定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值

void CUnionMain(void) {
    union Data {
        int i;
        float f;
        char str[20];
    } data;
    printf("Memory size occupied by data: %zd\n", sizeof(data));

    data.i = 10;
    data.f = 12L;
    strcpy(data.str, "I am from Data");
    printf("任何时候只能有一个成员带有值: %d, %f, %s\n", data.i, data.f, data.str);


    data.i = 11;
    printf("同一时间只使用一个变量 data.i: %d\n", data.i);
    data.f = 13L;
    printf("同一时间只使用一个变量 data.f: %f\n", data.f);
    strcpy(data.str, "I am from Data2");
    printf("同一时间只使用一个变量 data.str: %s\n", data.str);


}
