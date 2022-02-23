/*
 * STM32F103C8_RCC_DRIVER.h
 *
 *  Created on: Feb 19, 2022
 *      Author: Mostafa Mahmoud Elshiekh
 */

#ifndef INClUDE_STM32F103C8_RCC_DRIVER_H_
#define INCLUDE_STM32F103C8_RCC_DRIVER_H_


//include
#include "STM32_F103C8.h"
#include "STM32F103C8_GPIO_DRIVER.h"

#define HSI_RC_CLK 8000000


uint32_t MCAL_RCC_Get_SYS_CLKFreq(void);
uint32_t MCAL_RCC_Get_HCLK_Freq(void);
uint32_t MCAL_RCC_Get_PCLK1_Freq(void);
uint32_t MCAL_RCC_Get_PCLK2_Freq(void);

#endif /* INCLUDE_STMF103C8_RCC_DRIVER_H_ */


