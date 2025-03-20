#include "sort_and_remove_middle.h"
//#include "low_pass_filter.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    // 初始化测试数组
    int arr[] = {5, 3, 9, 1, 7};  // 固定测试数组
    int size = sizeof(arr) / sizeof(arr[0]);  // 计算数组长度
    
    // 打印原始数组
    printf("原始数组：\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }           
    printf("\n");   
    
    // 核心操作：排序并删除中间元素
    sortAndRemoveMiddle(arr, &size);  // 通过指针传递size以便修改原值

    // 打印处理后的数组
    printf("排序并删除中间值后的数组：\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    // 打印处理后的数组
    printf("\n");
    // 打印处理后的数组
    printf("排序并删除中间值后的数组：\n");

    return 0;
}