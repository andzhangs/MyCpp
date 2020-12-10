#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// C错误处理


void ErrorZero(void);


//perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
//strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
extern int errno;

void ErrorDealWith(void) {
    FILE *fFile = NULL;
    int errNum;
    fFile = fopen("../file/Tests.txt", "rb");
    if (fFile == NULL) {
        printf("输出异常");
        errNum = errno;
        fprintf(stderr, "错误号：%d\n", errno);
        perror("通过perror输出错误!");
        fprintf(stderr, "打印文件错误：%s\n", strerror(errNum));
    } else {
        printf("输出正常");
        fclose(fFile);
    }

    ErrorZero();
}

//被零除的错误
void ErrorZero(void) {
    int dividend = 20;
    int divisor = 5;
    int quotient;
    if (divisor == 0) {
        fprintf(stderr, "除数为0退出运行...", errno);
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient变量值为：%d\n", quotient);
    exit(EXIT_SUCCESS);
}


