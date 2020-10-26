#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//typedef 为一个已有的类型取一个新的名字
typedef int UserAge;
//枚举
enum color{red,green=5,yellow} c;

int main() {
    cout << "Hello, World!" << endl;


    UserAge userAge=1;
    cout << userAge << endl;

    c=yellow;
    cout << c << endl;



    return 0;
}
