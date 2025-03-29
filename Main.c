#include "sort_and_remove_middle.h"
//#include "low_pass_filter.h"
#include <stdio.h>
#include <stdlib.h>
#include "kalman_filter.h"


int main() {
    // 初始化测试数组
    int arr[] = {5, 3, 9, 1, 7};  // 固定测试数组
    int size = sizeof(arr) / sizeof(arr[0]);  // 计算数组长度
    KalmanFilter kf;  // 卡尔曼滤波器
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
    ////接口连接
    // 初始化卡尔曼滤波器
    
    KalmanFilter_Init(&kf, 0.1, 0.1, arr[0]);

    // 对数组中的每个元素应用卡尔曼滤波器
    printf("卡尔曼滤波后的数组：\n");
    for (int i = 0; i < size; i++) {
        float filtered_value = KalmanFilter_Update(&kf, arr[i]);
        printf("%f ", filtered_value);
    }
    printf("\n");

    //添加分支3的部分的变更部分（分支3合并）
    //net中修改main2分支
    //net更改main2部分，2025-3-26,0:43

    //net又更改main2部分，2025-3-26,0:53
    //main2的最后更改，2025-3-26,1:07



    return 0;
}
