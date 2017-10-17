/*************************************************************************
	> File Name: C9-15.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月17日 星期二 20时08分51秒
 ************************************************************************/

#include<stdio.h>
#define PI 3.1415926
#define S PI*r*r
#define P printf
#define D "%d\n"
#define F "%f\n"
void main()
{
    int a = 5,c = 8,e = 11;
    float b = 3.8, d = 9.7,f = 21.08;
    P(D F,a,d);
    P(D F,c,d);
    P(D F,e,f);

}
/*这是不带参数的宏定义，将字符串或者数字用一个字母代替，在
 * 编译的过程中进行宏代换
 * */
