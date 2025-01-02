// typedef  只能针对类型重命名
// static
#include<stdio.h>
int add(int x, int y)
{
    return x + y;
}

// static  add(int x, int y)  
// {
//     return x + y;
// }


typedef unsigned int uint;  // 类型重新取个名字

void test()     // void 修饰函数 函数则不需要返回值
{
    // int a = 1;         // 局部变量进入就创建 出去就销毁 放在栈区

    // static 修饰局部变量 改变了变量的存储位置 放在静态区里的数据，程序消失才会消失
    static int a = 1;     // 此条语句只会执行一次 然后a的值会一直存在 不会销毁
    a++;
    printf("%d\n",a);
}

// 函数声明
// extern int add(int x ,int y)
// extern int  num


int main()
{

    // unsigned int num = 0;
    uint num = 10;


// 链接属性！！！！
// static三种用法  linux语录：权限够用就行了
// 修饰局部变量  存储位置
// 修饰全部变量  链接属性 作用变小了
// 修饰函数    函数具有外部链接属性 修饰让函数没有外部的链接属性了 其它源文件(.c)文件不能够在使用了
    register int num3 = 33; // 放不放在寄存器要看编译器
// 寄存器register关键字  快快快快
// cache 高速缓存        快快快
// 内存                  快快
// 硬盘                  快

    int i = 0;
    while (i < 10)  // 循环0-9次
    {
        test();     // 函数调用语法
        i++;    
    }

// 全局变量全局都能使用
// 声明外部符号 extern声明在其它文件的东西，后面才能够使用
// static修饰的全局变量,会让全局变量的外部链接属性就变成内部链接属性，其它源文件(.)就不能再使用这个全局变量
// 全局变量具有外部链接属性的
    int a = 10;
    int b = 10;
    int z = add(a,b);
    printf("\n%d\n",z);
    return 0;
}