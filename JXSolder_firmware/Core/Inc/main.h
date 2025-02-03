/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

#include "stm32g4xx_ll_ucpd.h"
#include "stm32g4xx_ll_bus.h"
#include "stm32g4xx_ll_cortex.h"
#include "stm32g4xx_ll_rcc.h"
#include "stm32g4xx_ll_system.h"
#include "stm32g4xx_ll_utils.h"
#include "stm32g4xx_ll_pwr.h"
#include "stm32g4xx_ll_gpio.h"
#include "stm32g4xx_ll_dma.h"

#include "stm32g4xx_ll_exti.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* Struct to hold flash_data values */
typedef struct{
	float startup_temperature;
	float temperature_offset;
	float standby_temp;
	float standby_time;
	float emergency_time;
	float buzzer_enabled;
	float preset_temp_1;
	float preset_temp_2;
	float GPIO4_ON_at_run;
	float screen_rotation;
	float power_limit;
	float current_measurement;
	float startup_beep;
	float deg_celsius;
	float temp_cal_100;
	float temp_cal_200;
	float temp_cal_300;
	float temp_cal_350;
	float temp_cal_400;
	float temp_cal_450;
	float serial_debug_print;
	float displayed_temp_filter;
	float startup_temp_is_previous_temp;
	float three_button_mode;
}Flash_values;

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VERSION_BIT_1_Pin GPIO_PIN_13
#define VERSION_BIT_1_GPIO_Port GPIOC
#define VERSION_BIT_2_Pin GPIO_PIN_14
#define VERSION_BIT_2_GPIO_Port GPIOC
#define VERSION_BIT_3_Pin GPIO_PIN_15
#define VERSION_BIT_3_GPIO_Port GPIOC
#define HEATER_Pin GPIO_PIN_0
#define HEATER_GPIO_Port GPIOF
#define Pass_Pin GPIO_PIN_1
#define Pass_GPIO_Port GPIOF
#define FET_EN_Pin GPIO_PIN_10
#define FET_EN_GPIO_Port GPIOG
#define THERMOCOUPLE_Pin GPIO_PIN_0
#define THERMOCOUPLE_GPIO_Port GPIOA
#define CURRENT_Pin GPIO_PIN_1
#define CURRENT_GPIO_Port GPIOA
#define VBUS_CAPS_Pin GPIO_PIN_4
#define VBUS_CAPS_GPIO_Port GPIOA
#define VBUS_DOCK_Pin GPIO_PIN_5
#define VBUS_DOCK_GPIO_Port GPIOA
#define VBUS_USB_Pin GPIO_PIN_6
#define VBUS_USB_GPIO_Port GPIOA
#define VBUS_XT60_Pin GPIO_PIN_7
#define VBUS_XT60_GPIO_Port GPIOA
#define STAND_INP_Pin GPIO_PIN_0
#define STAND_INP_GPIO_Port GPIOB
#define HANDLE_INP_2_Pin GPIO_PIN_1
#define HANDLE_INP_2_GPIO_Port GPIOB
#define HANDLE_INP_1_Pin GPIO_PIN_2
#define HANDLE_INP_1_GPIO_Port GPIOB
#define PassB12_Pin GPIO_PIN_12
#define PassB12_GPIO_Port GPIOB
#define SW_3_Pin GPIO_PIN_13
#define SW_3_GPIO_Port GPIOB
#define I_LIM_BYP_Pin GPIO_PIN_14
#define I_LIM_BYP_GPIO_Port GPIOB
#define ENC_A_Pin GPIO_PIN_15
#define ENC_A_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_3
#define ENC_B_GPIO_Port GPIOB
#define SW_2_Pin GPIO_PIN_5
#define SW_2_GPIO_Port GPIOB
#define SW_2_EXTI_IRQn EXTI9_5_IRQn
#define BUZZER_Pin GPIO_PIN_7
#define BUZZER_GPIO_Port GPIOB
#define SW_1_Pin GPIO_PIN_8
#define SW_1_GPIO_Port GPIOB
#define SW_1_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */
void handle_button_status(void);
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
