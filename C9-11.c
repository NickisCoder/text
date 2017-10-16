/*************************************************************************
	> File Name: C9-11.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月16日 星期一 21时38分11秒
 ************************************************************************/

#include<stdio.h>
void main()
{
    unsigned a,b;
    printf("input a number:  ");
    scanf ("%d",&a);
    b = a >> 5;
    b = b& 15;
    printf("a=%d\t b=%d\n",a,b);
}
