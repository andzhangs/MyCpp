#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;
//
// Created by zhangshuai on 2020/12/24. 
// Email：zhangshuai@dushu.io
// C++多线程
/**
 * 两种类型的多任务处理：基于进程和基于线程。
 *   1、基于进程的多任务处理是程序的并发执行。
 *   2、基于线程的多任务处理是同一程序的片段的并发执行。
 */

/**         创建一个 POSIX 线程：
 * pthread_create (thread, attr, start_routine, arg)
 *     参数	            描述
 *   thread	        指向线程标识符指针。
 *   attr	        一个不透明的属性对象，可以被用来设置线程属性。您可以指定线程属性对象，也可以使用默认值 NULL。
 *   start_routine	线程运行函数起始地址，一旦线程被创建就会执行。
 *   arg	        运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。
 * 创建线程成功时，函数返回 0，若返回值不为 0 则说明创建线程失败。
 */

/**         终止线程
 * pthread_exit (status)
 *pthread_exit 用于显式地退出一个线程。
 * 通常情况下，pthread_exit() 函数是在线程完成工作后无需继续存在时被调用。
 * 如果 main() 是在它所创建的线程之前结束，并通过 pthread_exit() 退出，那么其他线程将继续执行。
 * 否则，它们将在 main() 结束时自动被终止
 */
#define NUM_THREADS 2
//定义线程的id变量，多个变量使用数组
pthread_t tids[NUM_THREADS];

//线程运行的函数
void *say_hello(void *args) {
    cout << "Hello Runoob！" << endl;
    return 0;
}

void createThread1() {
    //第一种
    int i;
    for (i = 0; i < NUM_THREADS; i++) {
        //参数依次是：创建的线程id，线程参数，调用的参数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0) {
            cout << "pthread_create error: error_code=" << ret << endl;
        } else {
            cout << "pthread_create success: success_code=" << ret << endl;
        }
    }
    printf("\n");
}


void *PrintHello(void *threadId) {
    //对传入的参数进行强制类型转换，由无类型指针变为整数型指针，然后再读取
    int tid = *((int *) threadId);
    cout << "Hello Runoob! 线程 ID, " << tid << "\t" << endl;
    //必写
    pthread_exit(NULL);
}

void createThread2() {
    //第二种
    int indexes[NUM_THREADS]; //用数组来保存j的值
    int rc, j;
    for (j = 0; j < NUM_THREADS; j++) {
        cout << "createThread2() : 创建线程, " << j << endl;
        indexes[j] = j; //先保存j的值
        //传入的时候必须强制转换为void*类型，即为无类型指针
        rc = pthread_create(&tids[j], NULL, PrintHello, (void *) &indexes[j]);
        if (rc == 0) {
            cout << "Success：创建线程成功," << rc << endl;
        }
        if (j == 4) {
            clog << "Error:clog无法创建线程," << rc << endl;
            cerr << "Error:cerr无法创建线程," << rc << endl;
//            exit(-1);
        }
    }
    printf("\n");
}

/**         向线程传递参数
 * 通过结构体传递多个参数。您可以在线程回调中传递任意的数据类型，因为它指向 void
 */
struct thread_data {
    int thread_id;
    char *message;
};

void *CoutHello(void *threadArg) {
    struct thread_data *my_data;
    my_data = (struct thread_data *) threadArg;
    cout << "ThreadId：" << my_data->thread_id << endl;
    cout << "Message：" << my_data->message << endl;
    pthread_exit(NULL);
}

void createThread3() {
    struct thread_data td[NUM_THREADS];
    int rc, j;
    for (j = 0; j < NUM_THREADS; j++) {
        cout << "createThread3() : 创建线程, " << j << endl;
        td[j].thread_id = j + 1;
        td[j].message = (char *) "This is message";

        rc = pthread_create(&tids[j], NULL, CoutHello, (void *) &td[j]);
        if (rc == 0) {
            cout << "Success：创建线程成功," << rc << endl;
        }
    }
    printf("\n");
}


/**
 *                连接和分离线程
 * pthread_join (threadid, status)
 * pthread_detach (threadid)
 * pthread_join() 子程序阻碍调用程序，直到指定的 threadid 线程终止为止。
 * 当创建一个线程时，它的某个属性会定义它是否是可连接的（joinable）或可分离的（detached）。
 * 只有创建时定义为可连接的线程才可以被连接。
 * 如果线程创建时被定义为可分离的，则它永远也不能被连接。
 */
void *wait(void *t) {
    int i;
    long tid;
    tid = (long) t;
    sleep(1);
    cout << "Sleeping in thread " << endl;
    cout << "Thread with id : " << tid << "  ...exiting " << endl;
    pthread_exit(NULL);
}

void createThread4() {
    int rc, i;
    pthread_attr_t attr;  //定义线程属性
    void *status;

    //初始化并设置线程为可连接的(joinable)
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (i = 0; i < NUM_THREADS; i++) {
        cout << "createThread4() : creating thread, " << i << endl;
        rc = pthread_create(&tids[i], NULL, wait, (void *) &i);
        if (rc == 0) {
            cout << "Success：创建线程成功," << rc << endl;
        }
    }

    //删除属性，并等待其他线程
    pthread_attr_destroy(&attr);
    for (i = 0; i < NUM_THREADS; i++) {
        rc = pthread_join(tids[i], &status);
        if (rc == 0) {
            cout << "Success：删除属性线程成功," << rc << endl;
        }
        cout << "createThread4: completed thread id :" << i;
        cout << "  exiting with status :" << status << endl;
    }
    cout << "createThread4: program exiting." << endl;
}


//主函数
void MultiThreadingMainCpp() {
//    createThread1();
//    createThread2();
//    createThread3();
    createThread4();

    //等各个线程退出后，进程才结束，否则进程强制结束，线程可能还没反应过来
    printf("\n");
    pthread_exit(NULL);
}
