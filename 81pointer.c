#include<stdio.h>

int main()
{


    int arr[10] = {0};
    printf("%d\n", &arr[9] - &arr[0]);
    // 指针减去指针的绝对值  得到的是指针之间元素的个数
    // 不是所有的指针都能相减 同一块空间










    return 0;
}