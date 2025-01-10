#include<stdio.h>
#include <stdbool.h>   // 引入 bool 类型支持

// 函数的功能要单一 简单
int is_leap_year(int year)
{
    if(((year % 4 == 0)&&(year % 100 != 0))||(year % 400 ==0))
    {
        return 1;
    }
    else
        return 0;
}

// 形式参数和实际参数名字可以相同 也可以不相同
// int arr[] 指针变量  不能再函数里面计算数组长度
// 数组传入参数是数组元素的首元素地址
// 形式参数看上去是数组 本质上是指针变量
int binary_search(int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid =  left + (right - left) / 2;
        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    
    return -1;
}

void Add(int* p)
{
    (*p)++;
}


int main()
{

    int year = 0;
    for(year = 1000; year <= 2000; year++)
    {
        // // 判断闰年
        // if(year % 4 == 0)
        // {
        //     if(year % 100 != 0)
        //     {
        //         printf("%d\n",year);
        //     }
        // }
        // if(year % 400 == 0)
        // {
        //     printf("%d\n",year);
        // }



        // if(((year % 4 == 0)&&(year % 100 != 0))||(year % 400 ==0))
        // {
        //     printf("%d ",year);
        // }


        // if(is_leap_year(year))  // 函数的调用 值传递
        // {
        //     printf("%d ",year);
        // }


        
    }

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 找到了返回下标 
    // 找不到返回-1

    // printf("%p",arr);
    // printf("%p",&arr[0]);

    // int ret = binary_search(arr, k, sz);
    // if(ret == -1)
    // {
    //     printf("找不到\n");
    // }
    // else
    // {
    //     printf("找到了，下表是：%d\n",ret);
    // }


// bool用来表示真的假的
// 简单easy

// 调用一次函数值增加一
    int num = 0;
    // Add(&num);
    // printf("%d\n",num);
    // Add(&num);
    // printf("%d\n",num);
    // Add(&num);
    // printf("%d\n",num);





























    return 0;
}