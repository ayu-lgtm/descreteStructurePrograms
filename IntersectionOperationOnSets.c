#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
void intersection(int a[],int b[],int c[],int e,int f);
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
void intersection(int a[],int b[],int c[],int e,int f)
{
  int d=0,w=0;
  int i,j,k=0;
  for(i=0;i<e;i++)
  {
      int z=0;
      for(j=0;j<f;j++)
      {
          if(a[i]==b[j])
          {
              z=0;
              d++;
              break;

          }
          else
          {
              z=1;
          }
      }
      if(z==0)
      {
          c[w]=a[i];
          w++;
      }
 }
  int jump;

  for(i=0;i<d;i++)
  {
      for(j=i+1;j<d;j++)
      {
          if(c[i]>c[j])
          {

              jump=c[i];
              c[i]=c[j];
              c[j]=jump;
          }
      }
  }
  printf("{");
  for(i=0;i<d;i++)
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
    printf("intersection(q^r):\n");
    intersection(q,r,v,g,h);
    return 0;
}
