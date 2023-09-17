#include "air001xx_hal.h"

static void Board_GPIO_Init();

int main(void)
{
	HAL_Init();

	Board_GPIO_Init();

	while (1)
	{
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_1);
		HAL_Delay(500);
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
		HAL_Delay(500);
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_3);
		HAL_Delay(500);
	}
}

static void Board_GPIO_Init(){
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	// 使能GPIOB时钟
	__HAL_RCC_GPIOB_CLK_ENABLE();
	// 设置GPIO初始化状态
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
	// 初始化GPIO
	GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_3;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}