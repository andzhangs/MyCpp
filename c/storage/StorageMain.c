#include <stdio.h>

//
// Created by 张帅 on 2020/11/3.
//
/**
 * 存储类
 * 1、auto 是所有局部变量默认的存储类,只能用在函数内，即 auto 只能修饰局部变量。
 * 2、register 用于定义存储在寄存器中而不是 RAM 中的局部变量
 * 3、static 指示编译器在程序的生命周期内保持局部变量的存在，修饰局部变量可以在函数调用之间保持局部变量的值。
 * 4、extern 用于提供一个全局变量的引用
 */
//函数声明
void func1(void);

//全局变量 - static是默认的
static int count=10;

int year;
extern void write_extern(void);

void StorageMain(void){
// auto int mouth;
// register int miles;

    while (count--) {
        func1();
    }
    year=5;
    write_extern();

}

//实现函数
void func1(void){
    /* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
     * 每次调用函数 'func1' 'thingy' 值不会被重置。
     */
    static int thingy=5;
    thingy++;
    printf("thing：%d, count：%d\n",thingy,count);
}