// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     // 死循环
//     // unsigned int i = 0;
//     // for(i = 9; i >= 0; i--)
//     // {
//     //     printf("%u\n", i);
//     // }

// // 负一的补码全是一
//     // 10000000000000000000000000000001
//     // 11111111111111111111111111111110
//     // 11111111111111111111111111111111
//     // 无符号视角这是一个无符号数

//     // char a[1000];
//     // int i;
//     // for(i = 0; i < 1000; i++)
//     // {
//     //     a[i] = -1-i;
//     //     // a[i] 是char类型的
//     // }
//     // printf("%d", strlen(a));   // 找到\0 之前的数字
//     return 0;
// }

// #include<stdio.h>

// unsigned char i = 0;
// // unsigned char 0-255

// int main()
// {   // 为什么死循环呢
//     for( i = 0; i <= 255; i++)
//     {
//         printf("hehe\n");
//     }
// }

// 注意无符号的使用 很容易形成死循环
// strlen是 size_t unsigned int

#include<stdio.h>
int main()
{

// limits.h
// float.h
    int n = 9;
    float* pFloat = (float*)&n;

    printf("n的值为: %d\n", n);
    printf("*pFloat的值为:%f\n",*pFloat);

    *pFloat = 9.0;

    printf("n的值为: %d\n", n);
    printf("*pFloat的值为:%f\n",*pFloat);


















    return 0;
}