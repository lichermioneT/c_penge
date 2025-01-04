#include<stdio.h>
int test()
{
   int a = 7;
   if(a == 3){
    return 3;         // return返回来就不要再执行后面的代码
   }
   else{
    return 0;        // 这个else很关键让代码更容易理解
   }
   
}

int main()
{
// {} 语句块 代码块
// c语言结构化的语言 控制语句九种
// 顺序 
// 选择  if switch
// 循环  for while do-while
// 转向  continue goto continue return

// c语言零就是假的 其他都是真的
// if
// if 默认跟一条语句 多条语句需要{}
    // int x = 100;
    // int y = 1001;
    // if(x < y)
    // {
    //     printf("x < y\n");
    // }
    // if(2 == 3)  // 注意判断相等==  赋值=
    // {
    //     printf("x");
    // }

    // int age = 22;
    // if(age > 18)
    // {
    //     printf("成年\n");
    // }
    // else
    // {
    //     printf("未成年\n");
    // }

    // // 多分支语句只会执行一个
    // int score = 22;                 // 先判断前面 在判断后面
    // if(score>=90 && score<= 100)  // 不能写成  90 <=score <= 100这是数学上到写法别拿到编程里面来
    // {
    //     printf("优秀\n");
    // }
    // else if(score>=80 && score<90)
    // {
    //     printf("良好\n");
    // }
    // else if(score>=60 && score<80)
    // {
    //     printf("中等");
    // }
    // else
    // {
    //     printf("没有及格\n");
    // }
// if后面总是放在语句块里面！！！
// else总是匹配最近的if
// 变量命名规范 斜杠或者第一个单词大写

// 好的习惯养成 一直都是好习惯
// 代码相等  if(常量值值==num变量值)

    // int r = test();
    // printf("%d\n",r);

// 判断一个数是不是奇数
    // int x = 0;
    // scanf("%d",&x);
    // if(x % 2 == 1){
    //     printf("%d是奇数\n",x);
    // }
    // else{
    //     printf("%d是偶数\n",x);
    // }

// 1 - 100之间的奇数
    // for(int x = 1; x <= 100; x += 2){
    //     printf("%d\n",x);
    // }

    // for(int x = 0; x <= 100; x++)
    // {
    //     if(x % 2 != 0){
    //         printf("%d\n",x);
    //     }
    // }
   

// switch语句块
// switch 里面放整形表达式  case里面放整形常量表达式 
    // int day = 0;
    // scanf("%d",&day);    
    // switch(day){
    //     case 1:printf("星期%d\n",day);break;
    //     case 2:printf("星期%d\n",day);break;
    //     case 3:printf("星期%d\n",day);break;
    //     case 4:printf("星期%d\n",day);break;
    //     case 5:printf("星期%d\n",day);break;
    //     case 6:printf("星期%d\n",day);break;
    //     case 7:printf("星期%d\n",day);break;
    //     default :printf("输入有误");
    // }

// switch语句的break注意添加完全
    // switch丝滑往下面滑下来
    int day = 0;
    scanf("%d",&day);  
    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("weekday\n",day); break;
        case 6:
        case 7:printf("weekend\n",day); break;
        default :printf("输入有误");break;
    }















































































    return 0;
}