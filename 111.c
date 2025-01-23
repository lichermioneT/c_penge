#include<stdio.h>
void menu() 
{
    printf("*********\n");
    printf("0   exit\n");
    printf("1  add\n");
    printf("2  sub\n");
    printf("3  mul\n");
    printf("4  div\n");
    printf("*********\n");
}

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

void bubble(int arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz - 1; i++)
    {    
        int flag = 1; // 假设已经排好顺序了
        int j = 0;
        for(j = 0; j < sz - 1 -i;j++)
        {
        //     if(*p > *(p + 1))
        //     {
        //         int temp = *p;
        //         *p = *(p+1);
        //         *(p + 1) = temp;
        //         p++;
        //     }

            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }

            if(flag == 0)
            {
                break;
            }
        }
    }
}

// 比较两整型元素
// void*指针不能直接进行解引用的

int cmp_int(const void* e1,const void* e2)
{
    return *(int*)e2 - *(int*)e1; // void*指针   降序
    // return *(int*)e1 - *(int*)e2; // void*指针  升序
}



int main()
{

// 函数指针数组 存放函数指针的数组
    // int(*pf1)(int,int)  = add;
    // int(*pf2)(int,int)  = sub;
    // int(*pf3)(int,int)  = mul;
    // int(*pf4)(int,int)  = div;

    // // 函数指针数组 参数类型相同 返回类型值相同
    // int(*arr[4])(int, int) = {add, sub, mul ,div};

    // int i = 0;
    // for(i = 0; i <  4; i++)
    // {
    //     printf("%d \n",arr[i](8,4));
    // }


// 计算器
    // int x = 0;
    // int y = 0;
    // int input = 0;
    // int ret = 0;

    // // 回调函数
    // int(*pf[])(int,int) = {0, add, sub, mul, div};
    // do{

    //     menu();
    //     printf("请选择");
    //     scanf("%d",&input);
    //     if(input == 0)
    //     {
    //         printf("退出计算器");
    //     }
        
    //     else if(input >= 1 && input <= 4)
    //     {
    //         printf("请输入两个操作数\n");
    //         scanf("%d%d",&x, &y);
    //         ret = pf[input](x, y);
    //         printf("%d \n", ret);
    //     }

    //     else
    //     {
    //         printf("选择错误");
    //     }
    // }
    // while(input);

    // do
    // {
    //     menu();
    //     printf("请选择>");
    //     scanf("%d",&input);

    //     switch(input)
    //     {
    //         case 1:
    //             printf("请输如两个整数\n");
    //             scanf("%d%d", &x, &y);
    //             ret = add(x, y);
    //             printf("%d\n",ret);
    //             break;
    //         case 2:
    //             printf("请输如两个整数\n");
    //             scanf("%d%d", &x, &y);
    //             ret = sub(x, y);
    //             printf("%d\n",ret);
    //             break;
    //         case 3:
    //             printf("请输如两个整数\n");
    //             scanf("%d%d", &x, &y);
    //             ret = mul(x, y);
    //             printf("%d\n",ret);
    //             break;
    //         case 4:
    //             printf("请输如两个整数\n");
    //             scanf("%d%d", &x, &y);
    //             ret = div(x, y);
    //             printf("%d\n",ret);
    //             break;
    //         case 0:
    //             printf("已经退出了\n");
    //             break; 
    //         default:
    //             printf("选择错误\n");
    //             break;

    //     }

    // } while (input);

// 指向函数指针数组的指针
    // int(*pf[])(int,int) = {0, add, sub, mul, div};

    // 指向函数指针数组的指针
    // int(*(*ppf)[5])(int, int) = &pf; // ppf指向int(*[5])(int, int)

// 回调函数
    /*
    通过函数指针调用函数
    */


// 冒泡排序更新版本
    int arr[] = {1,2,34,55,6,4,5,6,7,8,9,11};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // bubble(arr,sz);


    qsort(arr,sz,sizeof(arr[0]),cmp_int);  // 回调函数，需要使用的时候调用这个函数
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }

// void指针 是没有具体类型的指针
// void指针 可以接收任意类型的指针
// void指针 不能解引和+1








    return 0;
}