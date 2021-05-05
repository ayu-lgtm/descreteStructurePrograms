#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
void difference(int a[],int b[],int c[],int e,int f);
void array(int a[],int n)
{
    int i;
    printf("enter the array elements:\n");
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
  int d=0,w=0;
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

int main()
{
    int q[100],r[100],g,h,v[200];
    printf("\n enter the size of array q[]:");
    scanf("%d",&g);
    array(q,g);
    printf("\n enter the size of array r[]:");
    scanf("%d",&h);
    array(r,h);
    printf("difference(q-r):");
    difference(q,r,v,g,h);
    printf("\n");
    printf("difference(r-q):");
    difference(r,q,v,h,g);
    printf("\n");
    return 0;
}
