/*************************************************************************
	> File Name: C9-5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 20时17分52秒
 ************************************************************************/

#include<stdio.h>
/*void main()
{
    int count ,sum;
    count =1;//for循环省略表达式1,赋初值，要在外部赋初值
    for(;count<=100;count++)
       sum++;
    printf("sum = %d\n",sum);
}*/

/*void main()
{
    
    int count, sum;
    for (sum=0,count=1;count<=100;count++)//如果循环变量有多个可以使用逗号表达式进行赋值。//
     sum = sum + count;
    printf("sum = %d\n",sum);
}*/
/*void main()
{
    int count ,sum;
    sum = 0;
    for (count =1;;count++)
    {
        sum = sum +count;
        if(count>=100) break;//如果省略了循环条件，则循环永远为真，则需要在循环内部补充跳出循环的条件，在跳出循环的时候用break语句//
    }
    printf("sum = %d\n",sum);
}*/

/*void main()
{
    
    int count,sum;
    sum = 0 ;
    for (count =1;count <=100;)//如果省略的循环变量3,就要在循环体内部加入循环控制的变化语句//
    {
        sum = sum + count;
        count ++;
    }
    printf("sum=%d\n",sum);
}*/

/*void main()
{
    int count ,sum;
    sum = 0;
    count = 1;
    for (;;)//如果三个表达式都省略，但是三个表达式的分号不能省略，并且要在外部和内部添加条件，补充//
    {
        sum = sum + count;
        if (count >= 100) break;
        count++;
    }
    printf("%d\n",sum);
}*/
