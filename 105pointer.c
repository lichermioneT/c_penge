#include<stdio.h>
#include<string.h>
int main()
{

    // pointer
    // 字符指针

    // char ch = 'w';
    // char* pc = &ch;
    // *pc = 'b';
    // printf("%c\n",ch);

    // 字符串放在表达式  这里是把字符串a的首地址，赋值给了p
    // const char* p = "abcdef";  // p还是存放a的地址
    // "abcdef" 常量字符串
    // *p = 'w' 写入异常  
    // const修饰*p去了
    // printf("%s\n", p); // %s 打印到斜杠零结束

    // char arr[] = "abcdef";

// 常量
    // abcdef 常量字符串
    // const char* p1 = "abcdef";
    // const char* p2 = "abcdef";
    // p1和p2指向 常量字符串(不能被修改的，存一份就行)

    // 开辟变量存放空间 都是独立的空间
    // 数组名首地址

    // char arr1[] = "abcdef";
    // char arr2[] = "abcdef";

    // if(p1 == p2)
    // {
    //     printf("p1 == p2\n");
    // }
    // else
    // {
    //     printf("p1 != p2\n");
    // }

    // if(arr1 == arr2)
    // {
    //     printf("arr1 == arr2\n");
    // }
    // else
    // {
    //     printf("arr1 != arr2");
    // }


// 指针数组 还是数组
    // int* arr1[] = {NULL};
    // double* arr2[] = {NULL};
    // char* arr3[] = {NULL};
    
    // int arr1[] = {1,2,3,4,5};
    // int arr2[] = {2,3,4,5,6};
    // int arr3[] = {3,4,5,6,7};
    // int* parr[3] = {arr1, arr2, arr3};  // 每一个元素都是int*的指针

    // int i = 0;
    // for(i = 0; i < 3; i++)
    // {
    //     int j = 0;
    //     for(j = 0; j < 5; j++)
    //     {
    //     //    printf("%d ", *(parr[i] + j));  //arr[i] == *(arr + i)
    //        printf("%d ", parr[i][j]);
    //     }
    //     printf("\n");
    // }


// 数组指针 存放数组的指针
    // 整型指针 指向整型
    // 数组指针 指向数组

    int (*p2)[10]; // 数组指针

// 数组名
    int arr[10] = {0};
    int* p = arr;
    int (*p2)[10] = &arr; // 存放数组的地址
    // 类型 int (*)[10]


    // printf("%p \n", arr);
    // printf("%p \n", arr + 1);

    // printf("%p \n", &arr[0]);
    // printf("%p \n", &arr[0] + 1);

    // printf("%p \n", &arr);
    // printf("%p \n", &arr+1);

    // int sz = sizeof(arr);
    // printf("%d \n", sz);
    /*
    数组名通常都是数组首元素的地址
    例外1:size(数组名) 数组名表示整个数组的大小
    例外2:&(数组名) 这里的数组名表示依然是整个数组  所以&(数组名)是整个数组的地址
    */



















    return 0;
}