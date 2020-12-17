#include <iostream>

//
// Created by zhangshuai on 2020/12/14. 
// Email：zhangshuai@dushu.io
// 随机数
//rand()，该函数只返回一个伪随机数。
//生成随机数之前必须先调用 srand() 函数。

#include "RandomMainCpp.h"

using namespace std;

void RandomMain() {
    int i, j;
    //使用了 time() 函数来获取系统时间的秒数
    srand((unsigned) time(NULL));

    //生成10个随机数
    for (i = 0; i < 5; i++) {
        j = rand(); //生成实际的随机数
        cout << "随机数：" << j << endl;
    }
}