#include <stdio.h>
#include <stdlib.h>

//
// Created by 张帅 on 2020/12/4.
//函数指针、回调函数
//示例：
// typedef int (*fun_ptr)(int,int); 声明一个指向同样参数、返回值的函数指针类型
int max(int x, int y) {
    return x > y ? x : y;
}

//函数指针
void MethodPointMain(void) {
    //* p是函数指针
    int (*p)(int, int) =&max;// &可以省略
    int a, b, c, d;
    printf("请输入三个数字：\n");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);

    //与直接调用的函数等价，d=max(max(a,b),c)
    d = p(p(a, b), c);
    printf("最大数字是：%d\n", d);
}

//回调函数
void populate_array(long *array, size_t arraySize, long (*methodName)(void)) {
    for (size_t i = 0; i < arraySize; ++i) {
        array[i] = methodName();
    }
}

//获取随机值
long getNextRandomValue(void) {
    return random();
}

void CallMethodMain() {
    long myArray[10];
    int length = sizeof(myArray) / sizeof(myArray[0]);

    //getNextRandomValue 不能加括号，否则无法编译，
    //因为加上括号之后相当于传入此参数时传入了 int ,
    // 而不是函数指针
    populate_array(myArray, length, getNextRandomValue);
    for (int i = 1; i < length + 1; ++i) {
        printf("第%d次打印值：%ld\n", i, myArray[i]);
    }
    printf("\n");
}
