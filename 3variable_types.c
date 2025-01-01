// 写代码是为了解决生活里面的问题
// c语言抽象生活中的数据
// char short int long longlong float double  c语言里面没有字符串。
#include<stdio.h>
int main()
{
// 比特是计算机里面最小的字节 bit
// sizeof计算一个类型占几个字节
    // printf("%zu\n",sizeof(char));
    // printf("%zu\n",sizeof(short));
    // printf("%zu\n",sizeof(int));
    // printf("%zu\n",sizeof(long));
    // printf("%zu\n",sizeof(long long));
    // printf("%zu\n",sizeof(float));
    // printf("%zu\n",sizeof(double));

    /*
    1 字节（Byte） = 8 比特（bit）
    1 千字节（KB） = 1,024 字节
    1 兆字节（MB） = 1,024 千字节 = 1,048,576 字节
    1 千兆字节（GB） = 1,024 兆字节 = 1,073,741,824 字节
    1 太字节（TB） = 1,024 千兆字节 = 1,099,511,627,776 字节
    1 拍字节（PB） = 1,024 太字节 = 1,125,899,906,842,624 字节*
    */

// 数据的使用
// 创建变量的本质就是向内存申请空间
    int age = 100;            // 写int就是向内存申请四个字节的空间 空间的名字age 里面存放的数据是100
    double price = 66.4;

// 变量和常量





    return 0;
}