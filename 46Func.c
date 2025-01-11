#include<stdio.h> 
#include<string.h>
// print(1234)
// print(123) 4
// print(12)  3 4
// print(1)   2  3 4
//            1 2 3 4 

void print(unsigned int x)
{
    if(x > 9)
    {
        print( x / 10);    // 1234  123 12 1 递
    }                      // 1 % 10  12 % 10 123 % 10 1234 % 10                归
    printf("%d ", x % 10);
}


// int my_strlen(char str[])
int my_strlen1(char* str)
{
    int cout = 0;    // 临时变量
    while((*str) != '\0')
    {
        cout++;
        str++;
    }
    return cout;
}

//  尽量不要写++自增 
int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1 + my_strlen(str + 1);  
    }
    else
    {
        return 0;
    }
}
// my_strlen("abc")
// 1 + my_strlen("bc")
// 2 + my_strlen("c")
// 3 + my_strlen("")
// 3 + 0；



int main()
{

// 递归直接间接调用本身
// recursion

// 打印int的每一位

// %d 打印有符号的int 会有正负数
// %u 打印无符号的int 只有整数

    unsigned int num = 0;
    // scanf("%u", &num);

    // while (num)
    // {
    //     printf("%d ", num % 10);
    //     num = num / 10;
    // }

    // print(num);

// 递归存在限制条件  不然出现死递归的情况 

// 不创建变量 计算字符串的长度
    int len1 = my_strlen1("abcff");  // 传入是a的地址 a b c \0; 就用指针变量接收
    int len2 = my_strlen("abcd");
    printf("%d ", len2);




    return 0;
}