#include <iostream>
#include <string>
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// 字符串

using namespace std;

int StringMainCpp() {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    unsigned long len;

    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;

    return 0;
}
