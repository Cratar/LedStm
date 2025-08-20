#ifndef __7_3_LED_H
#define __7_3_LED_H

#define A GPIO_PIN_10
#define B GPIO_PIN_6
#define C GPIO_PIN_4
#define D GPIO_PIN_2
#define E GPIO_PIN_1
#define G GPIO_PIN_5
#define F GPIO_PIN_9
#define DP GPIO_PIN_3
#define L1 GPIO_PIN_11
#define L2 GPIO_PIN_8
#define L3 GPIO_PIN_7

#define B0 HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)



void test(int delay);                           // самоконтроль
void test2(int delay);                          //выводит все одновременно
void set_number(int n);                         // вывод цифры
void set_dig(int n);                            // установка DIG
void set_n_dig(int dig1,int dig2,int dig3);     // установка DIG1,DIG2,DIG3

void print_number(int n);                       // печать числа

#endif /* __7_3_LED_H */


