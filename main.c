
#include "main.h"

void GPIO_Init(void)
{
	RCC->AHBENR |= (1UL << 18U); //clock start
	GPIOB->MODER |= 0x55000; // output mode for pb6,7,8,9, input for pb2
	GPIOB->ODR |= 0x3C0; // initialization with all the leds turned on
}


int main(void)
{
	GPIO_Init();

  while (1)
  {
    if ((GPIOB->IDR&0x4)==0x4){
    	GPIOB->ODR = 0xc0;
    	//no water
    }
    else{
    	GPIOB->ODR = 0x300;
    	//water detected
    }

  }

}
