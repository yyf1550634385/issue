#include<stdio.h>

void ADC_Init(void)
{
// 初始化配置
ADC_EnableClock();
ADC_SetSamplingTime(ADC_SAMPLETIME_480CYCLES);
// 通道配置
ADC_ConfigChannel(ADC_CHANNEL_5, ADC_RANK_1);
ADC_ConfigChannel(ADC_CHANNEL_6, ADC_RANK_2);
}

void ADC_Init(void)
{
// ADC初始化代码
}



void PWM_Config(void)
{
// PWM配置代码
}


uint8_t u8CountSpaces(char* ps8SrcStr)
{
uint8_t u8Cnt = 0;
while (*ps8SrcStr)
{
if (*ps8SrcStr == ' ')
{
u8Cnt++;
}
ps8SrcStr++;
}
return u8Cnt;
}

void main()
{
return 0;}
