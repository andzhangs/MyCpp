#include <stdlib.h>
#include <stdio.h>
//
// Created by 张帅 on 2020/11/9.
//

/**
 * 举例：
 */
//#define MON 1
//#define TUE 2
//#define WED 3
//#define THU 4
//#define FRI 5
//#define SAT 6
//#define SUN 7

/**
 * 枚举：
 */
enum Day {
    E_MON = 1,
    E_TUE = 2,
    E_WED = 3,
    E_THU = 4,
    E_FRI = 5,
    E_SAT = 6,
    E_SUN = 7,
    E_OTHER
};


/**
 * 定义枚举变量
 */
//方式一：先定义枚举类型，再定义枚举变量
enum Day day1;
//方式二：定义枚举类型的同时定义枚举变量
enum Day2 {
    Es_MON = 1,
    Es_TUE,
    Es_WED,
    Es_THU,
    Es_FRI,
    Es_SAT,
    Es_SUN,
    Es_OTHER
} day2;
//方式三：省略枚举名称，直接定义枚举变量
enum {
    Ess_MON = 1,
    Ess_TUE = 2,
    Ess_WED = 3,
    Ess_THU = 4,
    Ess_FRI = 5,
    Ess_SAT = 6,
    Ess_SUN = 7,
    Ess_OTHER
} day3;


void EnumMain(void) {
    enum Day days;
    days = E_WED;
    printf("输出枚举：%d\n", days);

    //特殊情况可遍历枚举
//    for (day2 = Es_MON; day2 <= Es_SUN; day2++) {
//        printf("枚举元素：%d\n", day2);
//    }

    //将整型转换为枚举
    int a = 10086;
    enum Day2 day2;
    day2 = (enum Day2) a;
    printf("将整型转换为枚举：%d\n", day2);

}