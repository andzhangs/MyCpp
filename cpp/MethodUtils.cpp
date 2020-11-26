#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//函数定义
int func(int arg){
    //变量定义
    int a,b,c;
    //实际初始化
    a=10;
    b=arg;
    c=a+b;
    cout << c << endl;
    return c;
}
