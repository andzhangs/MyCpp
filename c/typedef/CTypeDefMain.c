#include <stdio.h>
#include <string.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// typedef 使用它来为类型取一个新的名字

#define TRUE 1
#define FALSE 0

typedef struct DuShuBooks {
    char title[50];
    char author[50];
    char subject[100];
    int bookId;
} Book;

void CTypeDefMain(void) {
    Book book;
    strcpy(book.title, "《可复制沟通力》");
    strcpy(book.author, "未知");
    strcpy(book.subject, "课程");
    book.bookId = 123456;

    printf("输出：%s %s, %s, %d\n", book.title, book.author, book.subject, book.bookId);

    printf("%d, %d\n", TRUE, FALSE);

}

