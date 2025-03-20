#ifndef LOW_PASS_FILTER_H
#define LOW_PASS_FILTER_H

// 低通滤波函数声明（与sort_and_remove_middle.h中的声明保持一致）
extern void lowPassFilter(const double input[], double output[], int size,
                         double cutoffFreq, double samplingFreq);

#endif