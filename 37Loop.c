#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
// 二分法查找元素
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int left = 0;
    // int right = (sizeof(arr) / sizeof(arr[0])) - 1;
    // int k = 8;
    // while (left <= right)
    // {
    //     int mid = (left + left) / 2;  // mid放在循环的里面
    //     int mid = letf + (right - letf) / 2 ;  // ????
    //     if(arr[mid] < k)
    //     {
    //         left = mid + 1;
    //     }
    //     else if (arr[mid] > k)
    //     {
    //         right = mid -1;
    //     }
    //     else
    //     {
    //         printf("找到了\n");
    //         break;
    //     }
    // }
    
    // if(left > right)
    // {
    //     printf("找不到\n");
    // }

// 写代码之前注意分析在写
    // char ch1[] = "welcome to bit!!!";  // 直接根据数据确定数组的大小
    // char ch2[] = "#################";

    // int i = 0;
    // int j = 0;
    // int sz = sizeof(ch1) / sizeof(ch1[0]);
    // int sz2 = sizeof(ch2) / sizeof(ch2[0]);

    // for(i = 0; i < (sz / 2); i++)  // 循环的次数
    // {
    //     if(i <= (sz - i -1))
    //     {
    //         ch2[i] = ch1[i];             // 从前面开始赋值
    //         ch2[sz -i - 2] =ch1[sz -i -2];  // 从后面开始赋值
    //     }

    //     for(j = 0; j <sz; j++)
    //     {
    //         printf("%c", ch2[j]);
            
    //     }
    //     printf("\n");
    // }

// strlen计算\0之前的元素
// sizeof则计算了\0
// 不要眼睛会 要手会

    // char arr1[] = "welcome to bit!!!!";
    // char arr2[] = "##################";

    // int letf = 0;
    // int right = strlen(arr1) - 1;       // int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
    // while (letf<=right)
    // {

    //     arr2[letf] = arr1[letf];
    //     arr2[right] = arr1[right];
    //     printf("%s\n",arr2);
    //     Sleep(1000); // 睡眠
    //     // system("cls");
    //     letf++;
    //     right--;

    // }
    

// 登录
// 比较两个字符串相等strcmp 返回值等于0则表示两个字符串相等1
    int i = 0;
    char password[20] = {0};
    for(i = 0; i < 3; i++)
    {
        printf("请输入密码:");
        scanf("%d",password);
        // if(password == "abc")
        if(strcmp(password, "abc") == 0)
        {
            printf("登录成功\n");
            break;

        }

    }







































    return 0;
}