/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月17日 星期二 19时54分23秒
 ************************************************************************/

#include<stdio.h>
#include "file2.c"
void main()
{
    int x,y;
    printf("input 2 numbers:");
    scanf("%d%d",&x,&y);
    printf("minmutiple = %d\n",minmultiple(x,y));
    printf("maxfactor = %d\n",maxfactor(x,y));
}
/*这个例子还是使用include包含自定义的源文件，需要注意
 * 的是在输入两个参数的时候，两个%之间没有任何空格的时候，
 *从键盘读入的时候可以用空格或者回车分割参数，但不能用逗号*/
