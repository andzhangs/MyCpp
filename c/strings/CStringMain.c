#include <string.h>
#include <strings.h>
#include <stdio.h>
//
// Created by zhangshuai on 2020/12/4. 
// Contact by zhangshuai@dushu.io
//C 字符串

void CStringMain(void) {
    char str1[12] = "hello";
    char str2[12] = " world";
    char str3[12];
    int len;

    //复制str1到str3；
    strcpy(str3, str1);
    printf("打印strcpy：%s\n", str3);

    //连接str2到str1末尾
    strcat(str1, str2);
    printf("打印strcat：%s\n", str1);

    //返回str1的长度
    len = strlen(str1);
    printf("打印strlen：%d\n", len);

    //返回一个指针，指向字符串 str1 中字符 he 的第一次出现的位置。
    char *p = strchr(str1, 0);
    printf("打印strchr：%s\n", p);

    //返回一个指针，指向字符串 str1 中字符串 str2 的第一次出现的位置。
    char *str = strstr(str1, str2);
    printf("打印strstr：%s\n", str);


}


