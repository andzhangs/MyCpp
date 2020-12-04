#include <stdio.h>
//
// Created by 张帅 on 2020/11/9.
//

const int MAX = 3;

void Sample(void);

void CPointMain(void) {
    int args = 10;
    int *p; //定义指针变量
    p = &args;
    printf("输出指针地址：%p，值：%d\n", p, *p);

    //赋为 NULL 值的指针被称为空指针:
    //如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。
    int *ptr = NULL;
    printf("输出空指针地址：%p\n", ptr);
    if (ptr) {
        printf("不为空指针");
    } else {
        printf("为空指针\n");
    }

    Sample();
}

void Sample(void) {
    int var[] = {10, 100, 200};
    int i, *ptr;

    /* 指针中第一个元素的地址 */
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1]) {

        printf("\t存储地址：var[%d] = %p, 存储值：%d\n", i, ptr, *ptr);

        /* 指向上一个位置 */
        ptr++;
        i++;
    }
}


