/*************************************************************************
	> File Name: C9-8.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月09日 星期一 21时15分54秒
 ************************************************************************/

#include<stdio.h>
void main()
{
    struct bs
    {
        unsigned a:1;
        unsigned b:7;

    }bit,*pbit;
    bit.a = 1; bit.b = 7;
    printf("%d,%d\n",bit.a,bit.b);
    pbit = &bit;
    pbit->a=0; pbit->b=66;
    printf("%o,%c\n",pbit->a,pbit->b);
}
/*这是位域的使用，需要注意的是：
 * %0 8进制输出 
 * %C 输出单个字符 */
