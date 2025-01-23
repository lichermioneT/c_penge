#include<stdio.h>
#include<string.h>

int main()
{
    // char arr[] ={'a', 'b', 'c', 'd', 'e', 'f'};
    // printf("%d\n", sizeof(arr)); // 只能是六，sizeof是计算数组的大小

    // printf("%d\n", sizeof(arr + 0));// 八个字节

    // printf("%d\n", sizeof(*arr)); // 一个字节
    // printf("%d\n", sizeof(arr[1])); // 一个字节

    // printf("%d\n", sizeof(&arr)); // 4/8个字节
    // printf("%d\n", sizeof(&arr + 1)); // 4/8个字节
    // printf("%d\n", sizeof(&arr[0] + 1)); // 4/8个字节 



    // char arr[] ={'a', 'b', 'c', 'd', 'e', 'f'};
    // printf("%d  \n", strlen(arr)); // 这里面没有斜杠零  不知道大小 随机值
    // printf("%d  \n", strlen(arr + 0)); // 这里跟上面一样的 随机值  

    // // printf("%d  \n", strlen(*arr)); // 计算a？？？ const char* str 野指针
    // // printf("%d  \n", strlen(arr[1])); //  野指针

    // printf("%d  \n", strlen(&arr));
    // printf("%d  \n", strlen(&arr + 1));
    // printf("%d  \n", strlen(&arr[0] + 1));
    // // printf("%d  \n", strlen(arr));


// 虚拟地址 物理地址
    // char arr[] = "abcdef";
    // printf("%d \n", sizeof(arr)); //7
    // printf("%d \n", sizeof(arr+0));// 4/8
    // printf("%d \n", sizeof(*arr));//1 第一个元素
    // printf("%d \n", sizeof(arr[1]));//1 第二个元素
    // printf("%d \n", sizeof(&arr));//4/8
    // printf("%d \n", sizeof(&arr+1));//4/8
    // printf("%d \n", sizeof(&arr[0]+1));//4/8

    // printf("%d \n",strlen(arr)); // 6
    // printf("%d \n",strlen(arr + 0)); // 6
    // printf("%d \n",strlen(*arr)); // err
    // printf("%d \n",strlen(arr[1])); //err
    // printf("%d \n",strlen(&arr));
    // printf("%d \n",strlen(&arr + 1));
    // printf("%d \n",strlen(&arr[0] + 1));


    char*  p = "abcdef";
    // printf("%d \n", sizeof(p)); // 八个字节
    // printf("%d \n", sizeof(p + 1)); // 八个字节
    // printf("%d \n", sizeof(*p)); // 指向a的首地址 一个字节 p[0] == *(p + 0)
    // printf("%d \n", sizeof(p[0]));// 一个字节
    // printf("%d \n", sizeof(&p)); // 八个字节
    // printf("%d \n", sizeof(&p + 1));// 八个字节
    // printf("%d \n", sizeof(&p[0] + 1 )); // 八个字节

    // printf("%d \n",strlen(p)); // 6
    // printf("%d \n",strlen(p + 1)); // 5
    // // printf("%d \n",strlen(*p));// err
    // // printf("%d \n",strlen(p[0]));
    // printf("%d \n",strlen(&p)); //随机值
    // printf("%d \n",strlen(&p + 1));
    // printf("%d \n",strlen(&p[0] + 1));








    return 0;
}