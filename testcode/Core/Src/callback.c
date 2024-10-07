//
// Created by zhu_y on 2024/10/7.
//
#include "main.h"
#include "tim.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if(htim->Instance == TIM6) {
        HAL_GPIO_TogglePin(LED_R_GPIO_Port,LED_R_Pin);
    }
}