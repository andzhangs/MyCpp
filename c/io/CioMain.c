#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
//

//int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符。
//int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符

void IoChar(void) {
    int c;
    printf("Enter a value：");
    c = getchar();

    printf("\nYou entered：");
    putchar(c);
}

//char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
//int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
void getPut(void) {
    char str[100];

    printf("Enter a value :");
    //warning: this program uses gets(), which is unsafe.:
    //使用fgets()函数替代gets()。
    gets(str);

    printf("\nYou entered: ");
    puts(str);
}

//int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入。
//int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。
void scanfPrintf(void) {
    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d ", str, i);
    printf("\n");
}

void CIoMain(void) {
//    IoChar();
//    getPut();
    scanfPrintf();
}