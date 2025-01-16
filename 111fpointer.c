// #include<stdio.h>

// int add(int x, int y)
// {
//     return x + y;
// }

// int sub(int x, int y)
// {
//     return x - y;
// }

// int mul(int x, int y)
// {
//     return x * y;
// }

// int div(int x, int y)
// {
//     return x / y;
// }

// int main()
// {

//     // 指针数组 int* arr1[5]
//     // 指针数组 char* arr2[6]

// //函数指针数组  
//     int (*pf)(int, int) = add;  // 函数指针
//     int(*arr[4])(int, int) = {add, sub, mul, div}; // 函数指针数组 
//     // 类型是 int(*)(int, int)
//     // arr就是函数指针的数组
//     int i = 0;
//     for(i = 0; i < 4; i++)
//     {
//         int ret = arr[i](8, 4);  // 函数指针调用函数
//         printf("%d \n", ret);
//     }
//     return 0;
// }


#include<stdio.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

void menu(void)
{
    printf("###############################\n");
    printf("#######1.add  2.sub############\n");
    printf("#######3.nul  4.div############\n");
    printf("#######0.exit   ###############\n");
}


// 冒泡排序
void bubble_sort(int arr[], int sz)
{   
    int i = 0;
    for(i = 0; i < sz -1; i++)
    {   
        int flag = 1;
        int j = 0;

        for(j = 0; j < sz - 1- i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                flag = 0;
            }
        }

        if(flag == 1)
        {
            break;
        }

    }
}

int main()
{
    // int input = 0;
    // int x = 0;
    // int y = 0;
    // int ret = 0;
    // // 函数指针数组
    // // 转移表
    // int (*pfarr[5])(int, int) = {0,add,sub, mul,div};
    // do
    // {   
    //     menu();
    //     printf("请选择\n");
    //     scanf("%d",&input);
    //     if(input == 0)
    //     {
    //         printf("退出计算器\n");
    //     }
    //     else if(input >= 1 && input <= 4)
    //     {
    //         printf("请输入两个操作数\n");
    //         scanf("%d%d",&x, &y);
    //         ret = pfarr[input](x, y);
    //         printf("%d", ret);
    //     }
    //     else
    //     {
    //         printf("选择错误\n");
    //     }

    // }while(input);

// 指向函数指针数组的指针

    // // 函数指针数组
    // int (*pfarr[5])(int, int) = {0,add,sub, mul,div};
    // // 指向 函数指针数组 的指针
    // int(*(*ppfarr)[5])(int, int) = &pfarr
    // // *pfarr 结合说明是指针


// 回调函数
    /*
    通过函数指针调用的函数
    */

   int arr[] = {9,8,7,6,5,4,3,2,1,0};
   // 0 1 2 3 4 5 6 7 8 9
   int sz = sizeof(arr) / sizeof(arr[0]);
   bubble_sort(arr,sz);
   int i = 0;
   for(i = 0; i < sz; i++)
   {
        printf("%d", arr[i]);
   }

// 库函数qsort  快速排序的思想实现一个函数 
// 函数调用约定 -cdedcl-





}