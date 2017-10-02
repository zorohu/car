#ifndef _Track_H
#define _Track_H
#include "stm32f10x.h"
#define left1_H         GPIOG->BSRR =  GPIO_Pin_10 //��
#define left1_L         GPIOG->BRR =  GPIO_Pin_10//��

#define left2_H         GPIOG->BSRR =  GPIO_Pin_11 //��
#define left2_L         GPIOG->BRR =  GPIO_Pin_11//��

#define right1_H         GPIOG->BSRR =  GPIO_Pin_12 //��
#define right1_L         GPIOG->BRR =  GPIO_Pin_12//��

#define right2_H         GPIOG->BSRR =  GPIO_Pin_13 //��
#define right2_L         GPIOG->BRR =  GPIO_Pin_13//��

//#define en1_H         GPIOG->BSRR =  GPIO_Pin_14 //��
//#define en1_L         GPIOG->BRR =  GPIO_Pin_14//��

//#define en2_H         GPIOG->BSRR =  GPIO_Pin_15 //��
//#define en2_L         GPIOG->BRR =  GPIO_Pin_15//��


void straight(void); //ֱ�к���
void turn_left(void); //��ת��������
void turn_right(void); //��ת��������
void turn_back(void); //��������
void turn_stop(void); //ͣ������
void infrared(void); //ѭ������
	
void Track_init(void);



#endif
