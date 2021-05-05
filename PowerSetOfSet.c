#include<stdio.h>
#include<stdlib.h>
void array(int a[],int n);
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
void printPowerSet(int set[], int set_size)
{
    int pow_set_size = pow(2, set_size);
    int counter, j;
    printf("{");
    for(counter = 0; counter < pow_set_size; counter++)
    {
    printf("{");
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            printf("%d", set[j]);
       }
       printf("},");
    }
    printf("}");
}

int main()
{
    int g;
    printf("\nenter the size of array q[]:");
    scanf("%d",&g);
    int q[g];
    array(q,g);
    printPowerSet(q,g);
    return 0;
}
