#include "led.h"

/*******************************************************************************
* �� �� ��         : delay
* ��������		   : ��ʱ������delay(6000000)��ʱԼ1s
* ��    ��         : i
* ��    ��         : ��
*******************************************************************************/
void delay(u32 i)
{
	while(i--);
}

/*******************************************************************************
* �� �� ��         : LED_Init
* ��������		   : LED��ʼ������
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void LED_Init()	  //�˿ڳ�ʼ��
{
	GPIO_InitTypeDef GPIO_InitStructure;	//����һ���ṹ�������������ʼ��GPIO

	SystemInit();	//ϵͳʱ�ӳ�ʼ��

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOE,ENABLE); /* ����GPIOʱ�� */

	/*  ����GPIO��ģʽ��IO�� */
	GPIO_InitStructure.GPIO_Pin=LED1;	 //ѡ����Ҫ���õ�IO��
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;	  //�����������ģʽ
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;	  //���ô�������
	GPIO_Init(GPIOB,&GPIO_InitStructure); /* ��ʼ��GPIO */	
	
	GPIO_InitStructure.GPIO_Pin=LED2;	 //ѡ����Ҫ���õ�IO��
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;	  //�����������ģʽ
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;	  //���ô�������
	GPIO_Init(GPIOE,&GPIO_InitStructure); /* ��ʼ��GPIO */	
}
