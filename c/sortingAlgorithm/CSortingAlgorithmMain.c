#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
// Created by zhangshuai on 2020/12/11. 
// Contact by zhangshuai@dushu.io
// 排序算法



/**
 * 冒泡算法
 */
void bubble_sort(int arr[], int len) {
    int i, j, temp, count = 0;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                int k;
                for (k = 0; k < len; k++) {
                    printf("%d\t", arr[k]);
                }
                printf("\n");
                count++;
            }
        }
    }
    printf("循环了多少次count= %d\n", count);
}

/**
 * 选择排序
 */

void swap(int *a, int *b) { //交换两个变数
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        int min = i;
        for (j = i + 1; j < len; j++) {  //走访为排序的元素
            if (arr[j] < arr[min]) { //知道最小的值
                min = j;  //记录最小值
            }
            swap(&arr[min], &arr[i]); //交换
        }
    }
}


/**
 * 插入函数
 */
void insertion_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}


/**
 * 希尔排序
 */
void shell_sort(int arr[], int len) {
    int i, gap, j, temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1) {
        for (i = gap; i < len; i++) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}


/**
 * 归并排序
 */
//迭代法
//int compare(int x, int y) {
//    return x > y ? x : y;
//}
//
//void merge_sort(int arr[], int len) {
//    int *a=arr;
//    int *b=(int *)malloc(len* sizeof(int));
//    int seg,start;
//    for (seg = 0;  start< len; start+=seg+seg) {
//        int low=start,mid=min()
//    }
//}


/**
 * 主函数
 */
void CSortingAlgorithmMain(void) {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int) sizeof(arr) / sizeof(*arr);
//    bubble_sort(arr, len);
//    selection_sort(arr, len);
//    insertion_sort(arr, len);
//    shell_sort(arr, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("\n这个是第%d个，值：%d", i + 1, arr[i]);
    }
}


