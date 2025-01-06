// 想办法+写代码
#include<stdio.h>
int main()
{
// 逻辑解决 阶乘计算
    // int i = 0;
    // int n = 0;
    // int ret = 1;

    // scanf("%d",&n);
    // for(i = 1; i <= n; i++)
    // {
    //     ret *= i;
    // }
    // printf("%d\n",ret);

// n个阶乘求和
    // int i = 0;
    // int sum = 0;
    // int j = 0;
    // scanf("%d", &i);
    // for(j = 1;j <= i; j++)
    // {
    //     int k = 0;
    //     int ret = 1;    // 每一次计算阶乘都需要让阶层从零开始
    //     for(k = 1; k <= j; k++)
    //     {
    //         ret *= k;
    //         sum += ret;
    //     }
        
    // }
    // printf("%d\n", sum);

// n个阶乘求和的优化
    // int i = 0;
    // int sum = 0;
    // int j = 0;
    // int ret = 1;  // 初始化阶乘的计算结果为 1

    // scanf("%d", &i);  // 读取用户输入的整数

    // for (j = 1; j <= i; j++) {
    //     ret *= j;  // 利用上次计算的阶乘结果更新当前阶乘
    //     sum += ret;  // 将当前阶乘加到总和
    // }

    // printf("%d\n", sum);  // 输出最终的阶乘和

// 有序数组查找某个数字(二分法)
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int i = 0;
    int letf = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    while (letf <= right)
    {
        int mid = (letf + right) / 2;
        if(arr[mid] < k)
        {
            letf = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid -1;
        }
        else
        {
            printf("zhaodao小标%d\n",mid);
            break;
        }

    }
    if(letf > right)
    {
        printf("找不到\n");
    }


    return 0;
}