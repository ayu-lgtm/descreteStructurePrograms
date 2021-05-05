#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
void union_(int a[],int b[],int c[],int e,int f);
void array(int a[],int n)
{
    int i;
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    printf("array :\n");
    printf("{");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("}");
    printf("\n");
}
void union_(int a[],int b[],int c[],int e,int f)
{
    int k=0;
    int i,j;
    for(i=0;i<e;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=e;i<e+f;i++)
    {
        c[k]=b[i-e];
        k++;
    }
    int ho;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]>c[j])
            {
                ho=c[i];
                c[i]=c[j];
                c[j]=ho;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[j]==c[i])
            {
                for(int u=j;u<k;u++)
                {
                    c[u]=c[u+1];
                }
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("{");
    for(i=0;i<k;i++)
    {
        printf("%d,",c[i]);
    }
    printf("}");
}
int main()
{
    int q[100],r[100],g,h,v[200];
    printf("\n enter the size of array q[100]:");
    scanf("%d",&g);
    array(q,g);
    printf("\n enter the size of array r[100]:");
    scanf("%d",&h);
    array(r,h);
    printf("union of q[100] and r[100] :\n");
    union_(q,r,v,g,h);
    return 0;
}
