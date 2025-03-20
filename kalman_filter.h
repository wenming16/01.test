#ifndef KALMAN_01_TEST_FILTER_H
#define KALMAN_01_TEST_FILTER_H

typedef struct {
    double x_est;    // 状态估计
    double p_est;    // 估计误差协方差
    double q;        // 过程噪声协方差
    double r;        // 测量噪声协方差
} KalmanFilter;

// 初始化卡尔曼滤波器
void kalmanInit(KalmanFilter* kf, double initial_value, double p_init, double process_noise, double measure_noise);

// 执行卡尔曼滤波更新
double kalmanUpdate(KalmanFilter* kf, double measurement);

#endif