// ... 已有排序函数 ...
// 包含之前定义的头文件
#include "low_pass_filter.h"

// 低通滤波函数
void lowPassFilter(const double input[], double output[], int size, double cutoffFreq, double samplingFreq) {
    double dt = 1.0 / samplingFreq;
    double RC = 1.0 / (2 * 3.1415926535 * cutoffFreq);
    double alpha = dt / (RC + dt);
    
    output[0] = input[0]; // 初始化第一个数据点
    
    for(int i = 1; i < size; i++) {
        output[i] = alpha * input[i] + (1 - alpha) * output[i-1];
    }
}
