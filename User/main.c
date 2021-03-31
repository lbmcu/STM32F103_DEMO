/*************************************************************************
    > File Name: main.c
    > Author: lbmcu
    > Mail: 1373766226@qq.com 
    > Created Time: Tue 30 Mar 2021 23:43:53 AM CST
    > Function: USART_DEMO STM32
 ************************************************************************/
#include "stm32f10x.h" //STM32ͷ�ļ�
#include "sys.h"
#include "delay.h"
#include "led.h"
#include "usart.h"


int main (void){//������
	RCC_Configuration(); //ʱ������
	
	USART1_Init(19200);
	LED_Init();
	
	
	while(1){
		GPIO_SetBits(LEDPORT,LED);
		delay_ms(500);
		GPIO_ResetBits(LEDPORT,LED);
		delay_ms(500);
		//printf("aaaaa\r\n");
	}
}
