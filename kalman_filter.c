#include "kalman_filter.h"
#include <stdlib.h>

void kalmanInit(KalmanFilter* kf, double initial_value, double p_init, 
               double process_noise, double measure_noise) {
    kf->x_est = initial_value;
    kf->p_est = p_init;
    kf->q = process_noise;
    kf->r = measure_noise;
}

double kalmanUpdate(KalmanFilter* kf, double measurement) {
    // 预测阶段
    double p_pred = kf->p_est + kf->q;
    
    // 更新阶段
    double kg = p_pred / (p_pred + kf->r);
    kf->x_est = kf->x_est + kg * (measurement - kf->x_est);
    kf->p_est = (1 - kg) * p_pred;
    
    return kf->x_est;
}