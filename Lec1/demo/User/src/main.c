#include "stm32f4xx.h"

int main(void)
{
	
	
		//声明一个结构体变量
		GPIO_InitTypeDef GPIO_InitStructure;	
		//使能GPIO外设时钟
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
			//定义一个结构体
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_9 |GPIO_Pin_10;//连接LED的引脚
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_OUT;         //输出模式
		GPIO_InitStructure.GPIO_Speed=GPIO_Speed_100MHz;    //100MHz
		GPIO_InitStructure.GPIO_OType=GPIO_OType_PP;		//推挽
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_UP;			//上拉
		GPIO_Init(GPIOF,&GPIO_InitStructure);
	
    while(1)
    {

    }
    return 0;

}

