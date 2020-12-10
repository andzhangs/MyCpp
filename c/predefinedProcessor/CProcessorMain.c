#include <stdio.h>
//
// Created by zhangshuai on 2020/12/8. 
// Contact by zhangshuai@dushu.io
// 预处理器

//预定义宏
//宏	    描述
//__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
//__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
//__FILE__	这会包含当前文件名，一个字符串常量。
//__LINE__	这会包含当前行号，一个十进制常量。
//__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。
void hong() {
    printf("File：%s\n", __FILE__);
    printf("Date：%s\n", __DATE__);
    printf("Time：%s\n", __TIME__);
    printf("Line：%d\n", __LINE__);
    printf("Stdc：%d\n", __STDC__);
}

//预处理器运算符
//一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）
//字符串常量化运算符（#）
#define message_for(a, b) \
printf(#a" and "#b", We love them!\n");

//标记粘贴运算符（##）
//宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记
#define tokenPaster(n) printf("token"#n" = %d\n",token##n);

//defined() 运算符
//预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。
//如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）

#if !defined(MESSAGE)
#define MESSAGE "You Wish!"
#endif

//参数化的宏
//老写法
int params(int x) { return x * x; }
//新写法
#define square(x)((x)*(x))


void ProcessorMain(void) {
    hong();
    message_for(Red, Blue);

    int token34 = 40;
    tokenPaster(34);

    printf("打印：%s\n", MESSAGE);

    printf("打印两个数的乘积：%d\n", square(5));

}
