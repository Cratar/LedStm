/**********************************************************************
*  7_3_LED.c
**********************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "7_3_LED.h"
#include "stm32f1xx_hal.h"

#ifndef __7_3_LED_ENABLED





void test(int delay){
  for(int i = 1 ; i < 4 ;i++){
    set_dig(i);
    for(int j = 0 ;j < 10 ; j++){
    set_number(j);
    HAL_Delay(delay);
    }
  }
/*
  HAL_GPIO_WritePin(GPIOA, L1 | L2 | L3, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L1 , GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
  HAL_Delay(delay);//пауза
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
  HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, L1 | L2 | L3, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L2 , GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
  HAL_Delay(delay);//пауза
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
  HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, L1 | L2 | L3, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, L3, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
  HAL_Delay(delay);//пауза
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
  HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7
  HAL_Delay(delay);
  
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
  HAL_Delay(delay);
  
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9
  HAL_Delay(delay);*/


}

void set_number(int n){ 
  HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
  if (n==0) 
  { 
    HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
  }
  if (n==1)   
  { 
    HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
  }
  if (n==2) 
  {
    HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2 
  }
  if (n==3)
  {
    HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
  }
  if (n==4)
  {
    HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4 
  }
  if (n==5)
  {
    HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5  
  }
  if (n==6)
  {
    HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6 
  }
  if (n==7)
  {
   HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7 
  }
  if (n==8)
  {
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
  }
  if (n==9)
  {
   HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9 
  }
}

void set_dig(int n){
  HAL_GPIO_WritePin(GPIOA, L1 | L2 | L3, GPIO_PIN_SET);
  if (n==1){
  HAL_GPIO_WritePin(GPIOA, L1 , GPIO_PIN_RESET);
  }
  if (n==2){
  HAL_GPIO_WritePin(GPIOA, L2 , GPIO_PIN_RESET);
  }
  if (n==3){
  HAL_GPIO_WritePin(GPIOA, L3 , GPIO_PIN_RESET);
  }
}

void set_n_dig(int dig1,int dig2,int dig3){
  if (dig1==1){
  HAL_GPIO_WritePin(GPIOA, L1 , GPIO_PIN_RESET);
  }else{
  HAL_GPIO_WritePin(GPIOA, L1 , GPIO_PIN_SET);
  }
  if (dig2==1){
  HAL_GPIO_WritePin(GPIOA, L2 , GPIO_PIN_RESET);
  }else{
  HAL_GPIO_WritePin(GPIOA, L2 , GPIO_PIN_SET);
  }
  if (dig3==1){
  HAL_GPIO_WritePin(GPIOA, L3 , GPIO_PIN_RESET);
  }else{
  HAL_GPIO_WritePin(GPIOA, L3 , GPIO_PIN_SET);
  }
}

void print_number(int n) {
  
  
     

  
  int n1=0, n2=0, n3=0;
  n1=n%10;
  n2=(n/10)%10;
  n3=(n/100)%10;
  set_dig(1);
  set_number(n3);
  HAL_Delay(5);
  set_dig(2);
  set_number(n2);
  HAL_Delay(5);
  set_dig(3);
  set_number(n1);
  HAL_Delay(5);
}                      // печать числа
void test2(int delay){
    for(int i = 0 ;i < 10 ; i++){
    set_number(i);
    HAL_Delay(delay);
    }
}

#endif /* __7_3_LED_ENABLED */
/*****************************************************  
* 7_3_LED.h
***************************************************  */


