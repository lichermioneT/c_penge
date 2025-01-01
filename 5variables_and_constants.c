// 写代码是为了解决生活问题
// 生活中里面不变的数据 可变的数据。
#include<stdio.h>

int x = 10; // 全局变量 全局可以使用
int main()
{
// 变量名都实际意义，增强了代码的可读性
    short age = 20;
    int high = 180;
    float weight = 85.5;

//局部变量和全局变量
    int y = 55;        // 局部变量 局部可以使用
    int x = 66;
    //printf("%d\n",x);  //全局变量和局部变量名字相同的情况下，局部变量优先。不要讲全局变量和局部写一样

// 变量的使用,在变量创建就要初始化，不然里面就是随机值，好习惯。
    int num1 = 0;
    int num2 = 0;

    // 输入两个整数
    // scanf函数是c语言的标准函数，可以跨平台使用。（scanf_s）
    scanf("%d%d",&num1,&num2);  // 输入函数,记住里面的取地址符号

    // 求和
    int sum = num1 + num2;

    // 输出
    printf("%d\n",sum);

    return 0;
}