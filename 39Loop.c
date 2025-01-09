// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>

// void menu()
// {
//     printf("######################################\n");
//     printf("1.paly\n");
//     printf("0.exit\n");
//     printf("######################################\n");
// }

// void game()
// {

//     int guess = 0;
//     int ret = rand() % 100 + 1;    // 任何数字模上100 生成的数字0--99 随机数生成的地方要注意
//     // printf("%d\n",ret); 

//     while (1)
//     {
//         printf("猜数字游戏\n");
//         scanf("%d",&guess);
//         if(guess < ret)
//         {
//             printf("猜小了\n");
//         }
//         else if (guess > ret)   // 大小写对
//         {
//             printf("猜大了\n");
//         }
//         else
//         {
//             printf("猜对了\n"); break;
//         }
//     }
    

// }


// int main()
// {

//     // int arr[10];
//     // printf("%zu\n",sizeof(arr));
//     // printf("%zu\n",sizeof(arr[1]));
    
// // 猜数字游戏
//     int input = 0;
//     srand((unsigned int)time(NULL));
//     do
//     {
//         menu();
//         printf("请选择>>\n");
//         scanf("%d",&input);
//         switch (input)
//         {
//         case 1: 
//             game();
//             break;
//         case 0: 
//             printf("退出游戏\n");
//             break;
//         default:
//             printf("选择错误，重新选择\n");
//             break;
        
//         }
 
//     }
//     while(input);
//     return 0;

// }

// #include<stdio.h>
// #include<string.h>
// #include <stdlib.h>
// int main()
// {
//     // printf("111");
//     // goto lic2;
//     // printf("222");
//     // lic2:
//     // printf("333");


//     // int i, j, k;

//     // for (i = 0; i < 3; i++) {
//     //     printf("i = %d\n", i);
//     //     for (j = 0; j < 3; j++) {
//     //         printf("  j = %d\n", j);
//     //         for (k = 0; k < 3; k++) {
//     //             printf("    k = %d\n", k);
//     //             if (i == 1 && j == 1 && k == 1) {
//     //                 printf("    Found the condition, exiting all loops.\n");
//     //                 goto exit_loops; // 跳出所有循环
//     //             }
//     //         }
//     //     }
//     // }

//     // exit_loops: // 标签位置
//     //     printf("Exited all loops.\n");


// //     char input[20] = {0};
// //     system("shutdown -s -t down");

// // again:
// //     printf("请注意您的电脑将在60秒后关机;输入我是猪 取消关键\n");
// //     scanf("%s",input);
// //     if(strcmp(input,"我是猪") == 0)
// //     {
// //         system("shutdown -a");
// //     }
// //     else
// //     {
// //         goto again;
// //     }

//     return 0;
// }
    
    


#include <stdio.h>
#include <string.h>

int get_max(int x, int y)
{
    // return返回值和函数胡类型是一样的
   return (x > y? x : y);
}

void swap(int x, int y)
{
    // 交换两个数的代码
    // 交给对方
    int temp = x;
    x = y;
    y = temp;

}

void swap2(int* x, int* y)
{
    // 指针实现交换
    // 通过指针找到值 没有交换地址
    // 实现远程交换
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
// 库函数实现基础代码更加方便
// cplusplus查看库函数 或者MSDN
// 英文很重要的 真的希望你慢慢学习 加油

// 怎么学习学习库函数 慢慢看文档  这是一种能力
// 库函数的使用需要添加头文件！！！
    // char arr1[20] = {0};
    // char arr2[] = "hello lichermionex";
    // strcpy(arr1,arr2);
    // printf("%s\n",arr1);


// 自定义函数
// 返回值类型 函数名 函数参数 函数体 return值


    int a = 0;
    int b = 0;
    scanf("%d %d",&a, &b);
    // 从这里开始写函数  然后再去上面定义函数
    // 函数的调用 :函数名(函数参数)
    // int m = get_max(a,b);   // a,b数据的输入  输入最大值
    // printf("%d\n",m);
    printf("%d %d\n", a , b);
    // 当实际参数传递给实际参数 形式参数是实际参数的临时拷贝
    // 形式参数的修改不会影响实际参数
    // swap(a,b);  // 不能实现交换 形式参数是实际参数的拷贝，这里只是交换了形式参数
    // printf("%d %d\n", a , b);

    swap2(&a, &b);
    printf("%d %d\n", a , b);











































    return 0;
}