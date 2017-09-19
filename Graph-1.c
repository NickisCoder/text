/*************************************************************************
	> File Name: Graph-1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月19日 星期二 19时26分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef struct
{
    char vertex[MAXSIZE];
    int edges[MAXSIZE][MAXSIZE];
}MGraph;

void CreatMGraph(MGraph*g,int e,int n)
{
    int i,j,k;
    printf("Input data of vertex(0~n~1):\n");
    for (i=0;i<n;i++)
    {
        g->vertex[i] = i;
    }
    for (i=0;i<n;i++)
     for (j=0;j<n;j++)
    {
        g->edges[i][j] = 0;
    }
    for (k=1;k<=e;k++)
    {
        printf("Input edge of(i,j):");
        scanf("%d,%d",&i,&j);
        g->edges[i][j]=1;
        g->edges[j][i]=1;
    }
    for (int i=0;i<n;i++)
     for (int j=0;j<n;j++)
    {
        printf("%4d",g->edges[i][j]);
        if (j+1==n)
        {
            printf("\n");
        }
    }
}

void main()
{
    MGraph  *root = (MGraph*)malloc (sizeof(MGraph));
    CreatMGraph(root,4,4);

}
/*注意：
 * 1.这是存储一个无向图的二位矩阵，矩阵下标从0开始
 * 2.在主函数中使用的时候用MALLO函数
 * 3.邻接矩阵的时间复杂度为N的三次方*/
