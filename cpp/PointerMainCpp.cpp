#include <iostream>

using namespace std;
//
// Created by zhangshuai on 2020/12/15. 
// Email：zhangshuai@dushu.io
// C++指针

/**
 * Null指针
 */
void NullPointerView() {
    int *ptr = NULL;
    cout << "ptr的值是：" << ptr << endl;

    if (ptr) {}     /* 如果 ptr 非空，则完成 */
    if (!ptr) {}    /* 如果 ptr 为空，则完成 */
}


/**
 *指针的算数运算
 */

const int MAX = 3;
int var[MAX] = {10, 100, 200};

//递增一个指针
void IncreasingPointerVoid() {
    printf("递增指针：\n");
    int *ptr;

    //指针的数组地址
    ptr = var;
    int i;
    for (i = 0; i < MAX; i++) {
        cout << "\tvar地址：[" << i << "], 值：" << *ptr << endl;
        ptr++;
    }

    printf("\n");
}

//递增一个指针
void DeclinePointerVoid() {
    printf("递减指针：\n");
    int *ptr;

    //指针中最后一个元素的地址
    ptr = &var[MAX - 1];
    for (int j = MAX; j > 0; j--) {
        cout << "\tvar地址：[" << j << "], 值：" << *ptr << endl;
        ptr--;
    }
    printf("\n");
}

//指针的比较
void ComparePointer() {
    printf("指针比较：\n");
    int *ptr;
    //指针中的第一个元素的地址
    ptr = var;
    int i = 0;
    while (ptr <= &var[MAX - 1]) {
        cout << "\tvar[" << i << "], 地址：" << ptr << ", 值：" << *ptr << endl;
        ptr++;
        i++;
    }
    printf("\n");
}

/**
 * 指针数组
 */
void PointerArrayVoid() {
    printf("指针数组：\n");
    int *ptr[MAX];
    for (int j = 0; j < MAX; ++j) {
        //赋值为整数的地址
        ptr[j] = &var[j];

        cout << "\t值：[" << j << "]：" << *ptr[j] << endl;
    }

    printf("\n\t用一个指向字符的指针数组来存储一个字符串列表\n");
    const char *name2[MAX] = {"Zara Ali", "Hina Ali", "Tom Ali"};

    for (int j = 0; j < MAX; ++j) {
        cout << "\t\t值[" << j << "]：" << name2[j] << endl;
    }
    printf("\n");
}

/**
 * 指针的指针
 */
//当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符
void SecondaryPointerVoid() {
    int a = 3000, *ptr, **pptr;

    //获取a的地址
    ptr = &a;
    //获取ptr的地址
    pptr = &ptr;

    // 使用 pptr 获取值
    cout << "a 值为 :" << a << endl;
    cout << "*ptr 值为:" << *ptr << endl;
    cout << "**pptr 值为:" << **pptr << endl;
    printf("\n");
}

/**
 * 传递指针给函数
 *
 * 能接受指针作为参数的函数，也能接受数组作为参数
 */
void getSeconds(unsigned long *ptr) {
    *ptr = time(NULL);
}

double getAverage(int *arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;
}

void TransmitPointerToVoidVoid() {
    unsigned long sec;
    getSeconds(&sec);
    // 输出实际值
    cout << "Number of seconds :" << sec << endl;

    // 带有 5 个元素的整型数组
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // 传递一个指向数组的指针作为参数
    avg = getAverage(balance, 5);

    // 输出返回值
    cout << "平均值: " << avg << endl;
    printf("\n");
}

/**
 * 从函数返回指针
 */
//要生成和返回随机数的函数
const int LEN = 5;

int *getRandom() {
    static int r[LEN];
    //设置种子
    srand((unsigned) time(NULL));
    int i;
    for (i = 0; i < LEN; i++) {
        r[i] = rand();
        cout << "生成的随机数：" << r[i] << endl;
    }
    return r;
}

void ReturnPointerVoid() {
    //一直指向整数的指针
    int *p;

    p = getRandom();
    int i;
    for (i = 0; i < LEN; i++) {
        cout << "*(p+" << i << ")：" << *(p + i) << endl;
    }
    printf("\n");
}


void PointerMainCpp() {
    char var2[5] = {'1', '2', '3', '4', '5'};
    int var1 = 10; //实际变量的声明
    int *ip;      //指针变量的声明
    ip = &var1;  //在指针变量中存储var1的地址
    cout << "var1 变量的地址：" << &var1 << endl;
    cout << "  ip 变量的地址：" << ip << "\t*ip：" << *ip << endl;
    cout << "var2 变量的地址：" << &var2 << "\n" << endl;

    NullPointerView();
    IncreasingPointerVoid();
    DeclinePointerVoid();
    ComparePointer();
    PointerArrayVoid();
    SecondaryPointerVoid();
    TransmitPointerToVoidVoid();
    ReturnPointerVoid();

    printf("\n");
}


