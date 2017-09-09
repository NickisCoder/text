/*************************************************************************
	> File Name: C9-2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月09日 星期六 20时55分43秒
 ************************************************************************/

#include<stdio.h>
//这个程序演示静态变量，静态存储类型的变量在编译阶段就完成内存的分配，在内存的全局变量中存储，可以定义为局部或者全局，分配内存后静态变量初始值为0,和动态变量的不同之处。//
void inc(void);
void main()
{
    inc();
    inc();
}

void inc(void)
{
    static int x;//因为是静态变量所以初始值为0//
    x++;
    printf("%d\n",x);

}
