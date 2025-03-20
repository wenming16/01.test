#include "sort_and_remove_middle.h"

//冒泡排序
void sortAndRemoveMiddle(int arr[], int *size) {
    // 冒泡排序
    for (int i = 0; i < *size - 1; i++) {
        for (int j = 0; j < *size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // 计算中间位置
    int middle = (*size) / 2;
    // 移除中间元素
    for (int i = middle; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // 减小数组大小
    (*size)--;
}

