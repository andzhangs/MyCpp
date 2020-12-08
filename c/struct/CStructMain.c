#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// 结构体



struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int bookId;
};
struct Books Book1;        /* 声明 Book1，类型为 Books */
struct Books Book2;        /* 声明 Book2，类型为 Books */

//声明函数
void printBook(struct Books);

//指向结构体的指针
struct Books *struct_point;

//位域: 是把一个字节中的二进位划分为几个不同的区域，并说明每个区域的位数
//每个域有一个域名，允许在程序中按域名进行操作。
//这样就可以把几个不同的对象用一个字节的二进制位域来表示。
struct AB {
    unsigned a: 1;
    unsigned b: 3;
    unsigned c: 4;
    unsigned d: 7;
} data, *pbit;

//位域
void WeiYu(void);


void CStructMain(void) {

    struct Books book = {"C 语言", "RUNOOB", "高级编程语言", 123456};
    book.bookId = 654321;
    printf("title：%s\nauthor：%s\nsubject：%s\nbookId：%d\n",
           book.title,
           book.author,
           book.subject,
           book.bookId);

    /* Book1 详述 */
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.bookId = 6495407;
    printf("title：%s\nauthor：%s\nsubject：%s\nbookId：%d\n",
           Book1.title,
           Book1.author,
           Book1.subject,
           Book1.bookId);


    /* Book2 详述 */
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara Ali");
    strcpy(Book2.subject, "Telecom Billing Tutorial");
    Book2.bookId = 6495700;

    //结构体作为函数参数
    printBook(Book2);

    //定义的指针变量中存储结构变量的地址
    struct_point = &Book1;
    printf("使用指向该结构的指针访问结构的成员bookId：%d\n", struct_point->bookId);
    WeiYu();
}

//如果程序的结构中包含多个开关量，只有 TRUE/FALSE 变量,
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;
//这种结构需要 8 字节的内存空间,实际每个变量中，我们只存储 0 或 1，如下
struct {
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;

void WeiYu(void) {
    data.a = 1;
    data.b = 7;
    data.c = 15;
    data.d = 31;

    //把位域变量 data 的地址送给指针变量 pbit
    pbit = &data;

    //用指针方式给位域 b 重新赋值，赋为 0
    pbit->b = 0;

    //位运算符 "&="，相当于：pbit->c=pbit->c&3，
    //位域 c 中原有值为 15，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3）
    pbit->c &= 3;

    //使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 31
    pbit->d |= 1;

    printf("%d, %d, %d, %d\n", data.a, data.b, data.c, data.d);

    printf("Memory size occupied by data: %zd\n", sizeof(status1));

    printf("Memory size occupied by data: %zd\n", sizeof(status2));
}


void printBook(struct Books books) {
    printf("title：%s\nauthor：%s\nsubject：%s\nbookId：%d\n",
           books.title,
           books.author,
           books.subject,
           books.bookId);
}

