#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
int n,x;
int rear=-1,front=-1;
void bfs(int v,int vis[n],int q[n],int a[n][n]);
void initial(int a[n][n]);
void edges(int a[n][n]);
int main()
{
    printf("\nEnter the number of Nodes: ");
    scanf("%d",&n);
    int a[n][n];
    int vis[n];
    int q[n];
    initial(a);
    edges(a);

    for(int k=0;k<n;k++)
    {
        vis[k]=0;
    }
    for(int k=0;k<n;k++)
    {
        q[k]=0;
    }
    int pos;
    printf("Enter the Starting position:");
    scanf("%d",&pos);
    printf("%d->",pos);
    bfs(pos,vis,q,a);
}
void initial(int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}
void edges(int a[n][n])
{
    int i,j,l;
    printf("\nEnter the number of edges:");
    scanf("%d",&l);
    int c,b,m=1;
    while(m<=l)
    {       peak:
            printf("\nenter edge between(v1,v2):");
            scanf("%d %d",&c,&b);
            if(c<n && b<n)
            {
                printf("(%d---%d):%d",c,b,1);
                a[c][b]=1;
                if(b!=c)
                {
                   printf("(%d---%d):%d",b,c,1);
                   a[b][c]=1;
                   m=m+1;
                }
                else{
                    m++;
                }
            }
            else{
                printf("invalid !");
                goto peak;
            }
    }

    i=0;
    j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
            }
        }
    }
    printf("\nAdjency Matrix of Graph:\n");
    for(i=0;i<n;i++)
    {
        printf("[");
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
}
void bfs(int v,int vis[],int q[],int a[n][n])
{
        int u=v;
        int i;
        vis[v]=1;
        for(i=0;i<n;i++)
        {       if(a[u][i]==1)
                {
                        if(vis[i]==0)
                        {
                                rear++;
                                if(front==-1)
                                        front++;
                                q[rear]=i;
                                vis[i]=1;
                        }
                }
        }
        if(front==rear+1)
         {
                return;
         }
        else
         {
                x=q[front];
                front++;
                printf("%d->",x);
                bfs(x,vis,q,a);
         }
}
