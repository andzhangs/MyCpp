#include <stdio.h>
#include "OperatorH.h"
//
// Created by 张帅 on 2020/11/3.
//            运算符
//

//声明函数
void ArithmeticOperator(void);

void RelationalOperators(void);

void LogicalOperator(void);

void BitwiseOperators(void);

void AssignmentOperators(void);

void MiscellaneousOperations(void);

void AllResultOperations(void);

/**
 * 主函数
 */
void OperatorMain(void) {
    ArithmeticOperator();
    RelationalOperators();
    LogicalOperator();
    BitwiseOperators();
    AssignmentOperators();
    MiscellaneousOperations();
    AllResultOperations();
}


/**
 * 算数运算符
 * 实例演示了a++ 与 ++a 的区别：
 */
void ArithmeticOperator(void) {
    printf("算数运算符：\n");
    int a = 21, b = 10, c;
    c = a + b;
    printf("\t\tLine 1: c 的值是 %d\n", c);
    c = a - b;
    printf("\t\tLine 2: c 的值是 %d\n", c);
    c = a * b;
    printf("\t\tLine 3: c 的值是 %d\n", c);
    c = a / b;
    printf("\t\tLine 4: c 的值是 %d\n", c);
    c = a % b;
    printf("\t\tLine 5: c 的值是 %d\n", c);
    c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
    printf("\t\tLine 6: c 的值是 %d\n", c);
    //此时a=22了
    c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
    printf("\t\tLine 7: c 的值是 %d\n", c);

    printf("\t------------------\n");
    printf("\ta++ 与 ++a 的区别：\n");

    c = a++;
    printf("\t\t先赋值后运算：\n");
    printf("\t\tLine 1: c 的值是 %d\n", c);
    printf("\t\tLine 2: a 的值是 %d\n", a);
    a = 10;
    c = a--;
    printf("\t\tLine 3: c 的值是 %d\n", c);
    printf("\t\tLine 4: a 的值是 %d\n", a);

    printf("\t\t先运算后赋值：\n");
    a = 10;
    c = ++a;
    printf("\t\tLine 5: c 的值是 %d\n", c);
    printf("\t\tLine 6: a 的值是 %d\n", a);
    a = 10;
    c = --a;
    printf("\t\tLine 7: c 的值是 %d\n", c);
    printf("\t\tLine 8: a 的值是 %d\n", a);
}

/**
 * 关系运算符
 */
void RelationalOperators(void) {
    printf("关系运算符：\n");
    int a = 21;
    int b = 10;

    if (a == b) {
        printf("\t\tLine 1: a 等于 b\n");
    } else {
        printf("\t\tLine 1: a 不等于 b\n");
    }
    if (a < b) {
        printf("\t\tLine 2: a 小于 b\n");
    } else {
        printf("\t\tLine 2: a 不小于 b\n");
    }
    if (a > b) {
        printf("\t\tLine 3: a 大于 b\n");
    } else {
        printf("\t\tLine 3: a 不大于 b\n");
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if (a <= b) {
        printf("\t\tLine 4: a 小于或等于 b\n");
    }
    if (b >= a) {
        printf("\t\tLine 5: b 大于或等于 a\n");
    }
}

/**
 * 逻辑运算符
 */
void LogicalOperator(void) {
    printf("逻辑运算符：\n");
    int a = 5;
    int b = 20;
    
    //两个操作数都非零，则条件为真
    if (a && b) {
        printf("\t\tLine 1 - 条件为真\n");
    }
    //两个操作数中有任意一个非零，则条件为真。
    if (a || b) {
        printf("\t\tLine 2 - 条件为真\n");
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if (a && b) {
        printf("\t\tLine 3 - 条件为真\n");
    } else {
        printf("\t\tLine 3 - 条件为假\n");
    }
    //逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。
    if (!(a && b)) {
        printf("\t\tLine 4 - 条件为真\n");
    }
}

/**
 * 位运算符
 */
void BitwiseOperators(void) {
    printf("位运算符：\n");
    unsigned int a = 60;    /* 60 = 0011 1100 */
    unsigned int b = 13;    /* 13 = 0000 1101 */
    int c = 0;

    c = a & b;       /* 12 = 0000 1100 */
    printf("\t\tLine 1 - c 的值是 %d\n", c);

    c = a | b;       /* 61 = 0011 1101 */
    printf("\t\tLine 2 - c 的值是 %d\n", c);

    c = a ^ b;       /* 49 = 0011 0001 */
    printf("\t\tLine 3 - c 的值是 %d\n", c);

    c = ~a;          /*-61 = 1100 0011 */
    printf("\t\tLine 4 - c 的值是 %d\n", c);

    c = a << 2;     /* 240 = 1111 0000 */
    printf("\t\tLine 5 - c 的值是 %d\n", c);

    c = a >> 2;     /* 15 = 0000 1111 */
    printf("\t\tLine 6 - c 的值是 %d\n", c);
}

/**
 * 赋值运算符
 */
void AssignmentOperators(void) {
    printf("赋值运算符：\n");
    int a = 21;
    int c;

    c = a;
    printf("\t\tLine 1: =  运算符实例，c 的值 = %d\n", c);

    c += a;
    printf("\t\tLine 2: += 运算符实例，c 的值 = %d\n", c);

    c -= a;
    printf("\t\tLine 3: -= 运算符实例，c 的值 = %d\n", c);

    c *= a;
    printf("\t\tLine 4: *= 运算符实例，c 的值 = %d\n", c);

    c /= a;
    printf("\t\tLine 5: /= 运算符实例，c 的值 = %d\n", c);

    c = 200;
    c %= a;
    printf("\t\tLine 6: %%= 运算符实例，c 的值 = %d\n", c);

    c <<= 2;
    printf("\t\tLine 7: <<= 运算符实例，c 的值 = %d\n", c);

    c >>= 2;
    printf("\t\tLine 8: >>= 运算符实例，c 的值 = %d\n", c);

    c &= 2;
    printf("\t\tLine 9: &= 运算符实例，c 的值 = %d\n", c);

    c ^= 2;
    printf("\t\tLine 10: ^= 运算符实例，c 的值 = %d\n", c);

    c |= 2;
    printf("\t\tLine 11: |= 运算符实例，c 的值 = %d\n", c);
}

/**
 * 杂项运算符 ↦ sizeof & 三元
 */
void MiscellaneousOperations(void) {
    printf("杂项运算符：\n");
    int a = 4;
    short b;
    double c;
    int *ptr;

    /* sizeof 运算符实例 */
    printf("\t\tLine 1: 变量 a 的大小 = %lu\n", sizeof(a));
    printf("\t\tLine 2: 变量 b 的大小 = %lu\n", sizeof(b));
    printf("\t\tLine 3: 变量 c 的大小 = %lu\n", sizeof(c));

    /* & 和 * 运算符实例 */
    ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
//    printf("\t\ta 的地址是 %d\n",&a);
    printf("\t\ta 的值是 %d\n", a);
    printf("\t\t*ptr 是 %d\n", *ptr);

    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20 : 30;
    printf("\t\tb 的值是 %d\n", b);

    b = (a == 10) ? 20 : 30;
    printf("\t\tb 的值是 %d\n", b);
}

/**
 * 运算符优先级
 */
void AllResultOperations(void){
    printf("运算符优先级：\n");
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("\t\t(a + b) * c / d 的值是 %d\n",  e );

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("\t\t((a + b) * c) / d 的值是 %d\n" ,  e );

    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("\t\t(a + b) * (c / d) 的值是 %d\n",  e );

    e = a + (b * c) / d;     //  20 + (150/5)
    printf("\t\ta + (b * c) / d 的值是 %d\n" ,  e );
}
