#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
void union_(int a[],int b[],int c[],int e,int f);
void array(int a[],int n)
{
    int i;
    printf("enter the array elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    printf("array :\n");
    printf("{");
    for(i=1;i<=n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("}");
    printf("\n");
}
void cartician(int a[],int b[],int m ,int n)
{
    printf("{");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
                printf("{%d,%d},",a[i],b[j]);
        }
    }
    printf("}");
}
int main()
{
    int q[100],r[100],g,h;
    printf("\n Enter the size of array q[100]:");
    scanf("%d",&g);
    array(q,g);
    printf("\n Enter the size of array r[100]:");
    scanf("%d",&h);
    array(r,h);
    printf("\n Cartician product of q[100]*r[100]:");
    cartician(q,r,g,h);
    return 0;
}
