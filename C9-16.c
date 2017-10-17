/*************************************************************************
	> File Name: C9-16.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月17日 星期二 20时23分58秒
 ************************************************************************/

#include<stdio.h>
#define MAX(a,b) (a>b)?a:b
void main()
{
    int x,y,iMAX;
    float a,b,fMAX;
    printf("input two integer numbers: ");
    scanf("%d%d",&x,&y);
    printf("input two float numbers: ");
    scanf("%f%f",&a,&b);
    iMAX = MAX(x,y);
    fMAX = MAX(a,b);
    printf("iMAX=%d\n fMAX=%f\n",iMAX,fMAX);
}

/*
 * 这是带参数的宏定义，带参数的宏定义有以下的特点：
 * 1.无需将参数进行类型说明，避开了数据类型的限制
 * 2.宏名和形参之间不能有空格
 * 3.宏定义的实际参数可以是表达式，但可能出现错误，因此建议将参数带上括号
 * /
