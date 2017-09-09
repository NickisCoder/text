/*************************************************************************
	> File Name: C9-1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月09日 星期六 19时18分45秒
 ************************************************************************/

#include<stdio.h>
//这个程序简单说明动态存储类型，auto类型动态分配存储空间堆栈，调用结束时，退出堆栈，释放变量//
int fac( int m  );
void main()
{
    auto int count, multiple;
    for(count=1;count<=5;count++)
    {
        multiple = fac(count);
        printf("count = %d,multiple = %d\n",count,multiple);
    }
}

int fac(int m)
{
    auto int i,p;
    p = 1;
    for (i=1;i<=m;i++ ){ p*=i;}
    return p;

}



