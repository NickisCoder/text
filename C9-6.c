/*************************************************************************
	> File Name: C9-6.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 20时51分29秒
 ************************************************************************/
//循环中有多个变量需要增减，用逗号表达式实现//
#include<stdio.h>
#define Longth 20
void main()
{
    int array[Longth],front,rear,count,temp;
    printf("\noriginal sequeue :\n");
    for (count = 0;count < Longth;count++)
    {
        array[count]=count;
        printf("%8d",array[count]);
    }
    for (front=0,rear=Longth-1;rear>front;front++,rear--)
    {
        temp=array[front];
        array[front]=array[rear];
        array[rear]=temp;
    }

    printf("\nchanged sequeue :\n");
    for(count=0;count<Longth;count++)
    {
        printf("%8d",array[count]);
    }
}
