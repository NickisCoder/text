/*************************************************************************
	> File Name: Graph-2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月20日 星期三 15时37分10秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int adjvex;
    struct node *next;
}EdgeNode;
typedef struct vnode
{
    int vertex;
    EdgeNode *firstedge;
}VertexNode;

void CreatAdjlist(VertexNode g[],int e,int n)
{
    EdgeNode *p;
    int i,j,k;
    printf("Input data of vertex(0~n-1):\n");
    for (i=0;i<n;i++)
    {
        g[i].vertex = i;
        g[i].firstedge = NULL;
    }
    for (k=1;k<=e;k++)
    {
        printf("Input edge of(i,j):");
        scanf("%d,%d",&i,&j);
        p=(EdgeNode*)malloc(sizeof(EdgeNode));
        p->adjvex=j;
        p->next=g[i].firstedge;
        g[i].firstedge = p;
        p = (EdgeNode *)malloc(sizeof(EdgeNode));
        p->adjvex = i;
        p->next = g[j].firstedge;
        g[j].firstedge = p;
    }
}
int main()
{
    return 0;
}
/* 这是图的链表存储方法需要注意：
 * 1.节点采用头插法。
 * 2.需要邻接表节点和顶点表节点
 * 3.这是无向图存储 */
