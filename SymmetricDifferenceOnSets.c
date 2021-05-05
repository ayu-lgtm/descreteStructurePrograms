#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
void difference(int a[],int b[],int c[],int e,int f);
int d=0;
void array(int a[],int n)
{
    int i;
    printf("\nenter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("{");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("}");
    printf("\n");
}
void difference(int a[],int b[],int c[],int e,int f)
{
  int w=0;
  int i,j;
  for(i=0;i<e;i++)
  {
      int z=0;
      for(j=0;j<f;j++)
      {
          if(a[i]==b[j])
          {
              z=1;
              d++;
              break;
          }
          else
          {
              z=0;
          }
      }
      if(z==0)
      {
          c[w]=a[i];
          w++;
      }
 }
  printf("{");
  for(i=0;i<e-d;i++)
  {
      printf("%d,",c[i]);
  }
  printf("}");
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
    printf("{");
    for(i=0;i<k;i++)
    {
        printf("%d,",c[i]);
    }
    printf("}");
}
int main()
{
    int g,h,v[200],G[200],L[200];
    printf("\nenter the size of array q[]:");
    scanf("%d",&g);

    int q[g];
    array(q,g);
    printf("\nenter the size of array r[]:");
    scanf("%d",&h);
    printf("\n\n");

    int r[h];
    array(r,h);
    printf("\ndifference(q-r):");
    difference(q,r,v,g,h);
    int c1=g-d;
    d=0;

    printf("\n\n");

    printf("\ndifference(r-q):");
    difference(r,q,G,h,g);
    int c2=h-d;

    printf("\n\n");
    printf("SYMMETRIC DIFFERENCE OF q[%d] and r[%d] =\n",g,h);
    union_(v,G,L,c1,c2);
    return 0;
}
