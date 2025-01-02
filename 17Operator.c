// C语言很灵活的原因之一丰富的操作符
// 算术操作符
#include<stdio.h>
int add(int x, int y)
{
    return x + y;
}


int main()
{
    int a = 7 / 2;  // 整数除以整数 = 整数
    int b = 7 % 2;  // 取余数的方法  取余数只能是整数之间的操作
    // printf("%d\n", a);
    // printf("%d\n", b);
    float c = 7 / 2.0;
    // printf("%.1f\n", c);  // %m.nf


    // 移位操作符 二进制运算 >> <<
    int x = 5;  // 二进制表示： 0101
    int result = a << 2;  // 左移 2 位
    // printf("%d\n", result);

    // 位操作符 & ^ |

    // 复合赋值法
    int num = 0;
    num = 20; // 赋值操作符
    num += 10;
    // printf("%d\n",num);

    // 单目操作符 只有一个操作数的操作符
    // c语言零表示假的，非零表示真的
    int flag = 2;
    if(!flag)  // 真假假真
    {
        printf("hehe\n");
    }

    int num2 = 33;
    int num3 = -num2; // 单目操作符号
    // printf("%d\n",num3);

    // 单目操作符sizeof             ~鞍按位操作符号  
    // printf("%zu\n",sizeof a);
    // printf("%zu\n",sizeof (int));   // 类型括号不能省略
    // int arr[10] = {0};
    // printf("%zu\n",sizeof arr);     // 计算的是整个数组的大小
    // printf("%zu\n",sizeof arr[0]);  // 计算一个元素的大小
    // printf("%d\n",sizeof arr / sizeof arr[0]); 

    int num4 = 9;
    // int num5 = num4++;     // 后置加加 先使用然后在加加
    // int num5 = ++num4;     // 先进行加加 在使用
    int num5 = --num4;        // 先减 在使用的
    // printf("%d\n",num5);
    
    float f = (float)(num5);   // 强制类型转换 (类型)表达式
    // printf("%.4f\n",f);

    // 关系操作符 注意编程里面 == 才是等于  = 才是赋值

    int num6 = 10;
    if(num6 == 1)
    {
        printf("hehe\n");
    }


    // 逻辑操作符 &&都   ||或者 
    int num7 = 10;
    int num8 = 0;
    if(num7 && num8)
    {
        printf("hehe\n");
    }

    // 条件操作符 三目操作符
    // exp1 ? exp2 : exp3; 
    // 赋值操作符的优先级最低
    int num9 = num7 > num8? num7:num8;
    printf("%d\n",num9);

    // 逗号表达式 exp1,exp2,exp3...expn  结果是expn

    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = (num2 = num2 + num4,num3 = num4 - num2,num2*num3);
    printf("%d\n",num5);


    // 常见关键字[] () . -
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //arr[3] arr和3就是[]的操作数

    // 函数调用操作符
    num2 = 2;
    num3 = 3;
    num4 = add(num2, num3);  // add num2 num3 都是() 的操作数
    printf("%d\n",num4);





























































    return 0;
}