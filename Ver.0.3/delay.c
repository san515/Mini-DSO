/* 延时函数，由STC-ISP软件生成
   Dealy Functions. Generated by STC-ISP Software*/

#include "delay.h"

void Delay500us() //@27.000MHz
{
    unsigned char i, j;

    _nop_();
    _nop_();
    i = 18;
    j = 133;

    do
    {
        while (--j)
            ;
    } while (--i);
}

void Delay5ms() //@27.000MHz
{
    unsigned char i, j;

    _nop_();
    i = 176;
    j = 80;

    do
    {
        while (--j)
            ;
    } while (--i);
}

void Delay50ms() //@27.000MHz
{
    unsigned char i, j, k;

    _nop_();
    i = 7;
    j = 218;
    k = 55;

    do
    {
        do
        {
            while (--k)
                ;
        } while (--j);
    } while (--i);
}

/* 编码器长按计时
   Encoder Long Press Timer */
bit Delay800ms_Long_Press() //@27.000MHz
{
    unsigned char i, j, k;
    _nop_();
    _nop_();
    i = 110;
    j = 148;
    k = 166;

    do
    {
        do
        {
            /* 编码器松开或转动
               Encoder released or rotated */
            if (EC11_KEY || EC11PressAndRotate)
                return 0;

            while (--k)
                ;
        } while (--j);
    } while (--i);

    return 1;
}

/* 编码器双击计时
   Encoder Double Click Timer */
bit Delay300ms_Double_Click() //@27.000MHz
{
    unsigned char i, j, k;
    EX0 = 0;
    Delay5ms();

    i = 42;
    j = 24;
    k = 92;

    do
    {
        do
        {
            /* 编码器被再次按下
               Encoder pressed again */
            if (!EC11_KEY)
            {
                IE0 = 0;
                EX0 = 1;
                return 1;
            }

            while (--k)
                ;
        } while (--j);
    } while (--i);
    IE0 = 0;
    EX0 = 1;
    return 0;
}

void Delay1000ms() //@27.000MHz
{
    unsigned char i, j, k;

    _nop_();
    i = 137;
    j = 249;
    k = 145;

    do
    {
        do
        {
            while (--k)
                ;
        } while (--j);
    } while (--i);
}

void Delay3us() //@27.000MHz
{
    unsigned char i;

    i = 25;

    while (--i)
        ;
}

//For scaleH 500ms with ADC_SPEED_512 20ms-26us-3us
void Delay19971us() //@27.000MHz
{
    unsigned char i, j, k;

    i = 3;
    j = 189;
    k = 67;

    do
    {
        do
        {
            while (--k)
                ;
        } while (--j);
    } while (--i);
}

//For scaleH 200ms with ADC_SPEED_512 8ms-26us-3us
void Delay7971us() //@27.000MHz
{
    unsigned char i, j, k;

    _nop_();
    i = 2;
    j = 24;
    k = 124;

    do
    {
        do
        {
            while (--k)
                ;
        } while (--j);
    } while (--i);
}

//For scaleH 100ms with ADC_SPEED_512 4ms-26us-3us
void Delay3971us() //@27.000MHz
{
    unsigned char i, j;

    _nop_();
    i = 140;
    j = 59;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 50ms with ADC_SPEED_512 2ms-26us-3us
void Delay1971us() //@27.000MHz
{
    unsigned char i, j;

    i = 70;
    j = 26;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 20ms with ADC_SPEED_512 800us-26us-3us
void Delay771us() //@27.000MHz
{
    unsigned char i, j;

    i = 28;
    j = 6;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 10ms with ADC_SPEED_512 400us-26us-3us
void Delay371us() //@27.000MHz
{
    unsigned char i, j;

    i = 13;
    j = 0;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 5ms with ADC_SPEED_512 200us-26us-3us
void Delay171us() //@27.000MHz
{
    unsigned char i, j;

    _nop_();
    _nop_();
    i = 6;
    j = 252;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 2ms with ADC_SPEED_512 80us-26us-3us
void Delay51us() //@27.000MHz
{
    unsigned char i, j;

    _nop_();
    i = 2;
    j = 199;

    do
    {
        while (--j)
            ;
    } while (--i);
}

//For scaleH 1ms with ADC_SPEED_352 40us-19us-3us
void Delay18us() //@27.000MHz
{
    unsigned char i;

    i = 160;

    while (--i)
        ;
}

//For scaleH 500us with ADC_SPEED_192 20us-11us-3us
void Delay6us() //@27.000MHz
{
    unsigned char i;

    i = 44; //微调/Fine tuning 52->44

    while (--i)
        ;
}

