#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;
//
// Created by zhangshuai on 2020/12/23. 
// Email：zhangshuai@dushu.io
// C++模板
//模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。

/**
 *                              函数模板
 * ---------------------------------------------------------------
 * 描述：
 * ---------------------------------------------------------------
 */
//比较两个数的最大值
template<typename T>
inline T const &Max(T const &x, T const &y) {
    return x < y ? y : x;
}

void Compare2Params() {
    int i = 39;
    int j = 20;
    cout << "Max(i,j)：" << Max(i, j) << endl;

    double d1 = 13.5;
    double d2 = 20.7;
    printf("Max(d1,d2)：%.2lf\n", Max(d1, d2));

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1,s2)：" << Max(s1, s2) << endl;
}

/**
 *                              类模板
 * ---------------------------------------------------------------
 * 描述：
 * ---------------------------------------------------------------
 */
template<class T>
class Stack {
private:
    vector<T> elems; //元素
public:
    void push(T const &);//入栈
    void pop();         //出栈
    T top() const;      //返回栈顶元素
    bool empty() const { //如果返回空则返回真
        return elems.empty();
    }
};

template<class T>
void Stack<T>::push(T const &elem) {
    //追加传入元素的副本
    elems.push_back(elem);
}

template<class T>
void Stack<T>::pop() {
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    //删除最后一个元素
    elems.pop_back();
}

template<class T>
T Stack<T>::top() const {
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
}

void ClassTemplate() {
    try {
        Stack<int> intStack;     //int 类型的栈
        Stack<string> strStack;  //string 类型的栈

        //操作int 类型的栈
        intStack.push(7);
        cout << "输出数字：" << intStack.top() << endl;

        //操作string 类型的栈
        strStack.push("Hello");
        cout << "输出字符串：" << strStack.top() << endl;
        strStack.pop();
        strStack.pop();
    } catch (exception const &e) {
        cerr << "Exception：" << e.what() << endl;
    }

}


//主函数
void TemplateMainCpp() {
    Compare2Params();
    ClassTemplate();
    printf("\n");
}