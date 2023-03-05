/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
/********************************************************************************
 * Diese Routine aktiviert den Chip select (Pin Low) um Daten transfert über
 * SPI zu erlauben
 ********************************************************************************/
void LTC1658_Enable_CS();

/********************************************************************************
 * Diese Routine deaktiviert den Chip select (Pin High) um Daten transfert über
 * SPI zu stoppen.
 ********************************************************************************/
void LTC1658_Disable_CS();

/********************************************************************************
 * Diese Routine schreibt daten zu den DAC Wandler.
 *das ist ein 16bit daten. Es wird davon nur 14Bit vom DAC verwendet (2 x 8 bits)
 ********************************************************************************/
void LTC1658_WriteData(uint16_t data);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LTC1658_CS_Pin GPIO_PIN_5
#define LTC1658_CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
