/*************************************************************************
	> File Name: C9-14.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月17日 星期二 19时41分29秒
 ************************************************************************/

#include<stdio.h>
#include"C9-12.c"
#include"C9-13.c"
void main()
{
    int a = 18,b = 9,c,d;
    c = max(a,b);
    d = min(a,b);
    printf("max=%d,min=%d\n",c,d);
}
