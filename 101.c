#include<stdio.h>
int main()
{

// limits.h
// float.h
    // int n = 9;
    // float* pFloat = (float*)&n;

    // printf("n的值为: %d\n", n);
    // printf("*pFloat的值为:%f\n",*pFloat);

    // *pFloat = 9.0;

    // printf("n的值为: %d\n", n);
    // printf("*pFloat的值为:%f\n",*pFloat);

// IEEE754标准 二进制数的浮点数
// v = (-1)^S*M*2^E
// (-1)^s表示符号位,当s=0,v为正数;当s=1;v为负数
// M表示有效数字,大于等于1;v小于2
// 2^E表示指数位
/*
    浮点数 浮点
    v = 5.0f; 
    v = 101.0 = 1.01*2^2 = (-1)^0*1.01*2^2   s=0 m=1.01  e=2
    v = 9.5f;
    v = 1001.1 = 1.0011*2^3 = (-1)^0*1.0011*2^3  s=0 m=1.0011 e=3
    v = 1001.100110011
    32位存储：s(1bit) e(8bit)  m(23bit)
    64位存储：s(1bit) e(11bit) m(52bit)

    IEEE754规定 计算机保存m时总,舍去m的1,读取的时候加上1 

    e是无符号整型:8位0-255     存入时e的真实值必须在加上一个中间数:127   float
    e是无符号整型:11位0-2047   存入时e的真实值必须在加上一个中间数:1023  double
    v = 0.5;
    v = 0.1 = 1.0*2^-1 = (-1)^0*1.0*2^-1  s=0 m=1.0 e=-1     127-1=126存储 1023-1=1022存储
*/

    float f = 5.5;
    /*
    v = 5.5 = 101.1 = (-1)^0*1.011*2^2;  s=0,m=1.011,e=2
    s=0,m=1.011,e=2   s=0 e=2+127=129
    0 10000001 01100000000000000000000
    0100 0000 1011 0000 0000 0000 0000 0000
0x  4    0    b    0    0    0    0    0
0x  40b00000
    */


// 取出来三种情况
    /*
    1:e不为全零或者全1 指数e的值减去127(1023),得到真实值,再将有效数字m前加上第一位1
    2:e为全零的时候 浮点数的指数e等于1-127(或者1-1023)
    3:e为全零的时候
    */












    return 0;
}