#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;
//
// Created by zhangshuai on 2020/12/24. 
// Email：zhangshuai@dushu.io
// C++信号处理

/** csignal
 *    信号   	       描述
 *   SIGABRT	程序的异常终止，如调用 abort。
 *   SIGFPE	    错误的算术运算，比如除以零或导致溢出的操作。
 *   SIGILL	    检测非法指令。
 *   SIGINT	    程序终止(interrupt)信号。
 *   SIGSEGV	非法访问内存。
 *   SIGTERM	发送到程序的终止请求。
 */

/**
 * signal 函数，用来捕获突发事件
 * signal(registered signal, signal handler)
 * 1、第一个参数是一个整数，代表了信号的编号；
 * 2、第二个参数是一个指向信号处理函数的指针
 */
/**
 * raise 生成信号，该函数带有一个整数信号编号作为参数
 * int raise (signal sig);
 */
void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序
    exit(signum);
}

//主函数
void SignalMainCpp() {
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    int i = 0;
    while (++i) {
        cout << "Going to sleep...." << endl;
        if (i == 3) {
            raise(SIGINT);
        }
        sleep(1);
    }
    printf("\n");
}



