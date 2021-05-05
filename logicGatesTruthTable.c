#include<stdio.h>
#include<conio.h>
int OR(int,int);
int AND(int,int);
int XOR(int,int);
int NOT(int);
int NAND(int,int);
int NOR(int,int);

void main()
{
int a,b,ch,S;
printf("\n-:MENU:-\n1.AND\n2.OR\n3.NOT\n4.XOR\n5.NAND\N6.NOR\n0.Exit\n");
do{
printf("\nEnter Choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf ("\nTruth Table for AND\nA | B | O\n");
printf("____________");
for(a=0;a<=1;a++)
{
 for(b=0;b<=1;b++)
   { S=AND(a,b);
     printf("\n%d | %d |\t%d",a,b,S);
   }
}
 break;
case 2:printf ("\nTruth Table for OR\nA | B | O\n");
printf("____________");
for(a=0;a<=1;a++)
{
 for(b=0;b<=1;b++)
   {
   S=OR(a,b);
   printf("\n%d | %d |\t%d",a,b,S);
   }
}
 break;
case 3:  printf ("\nTruth Table for NOT\nA | B | O\n");
printf("____________");
for(a=0;a<=1;a++)
{
S=NOT(a);
printf("\n%d |\t%d",a,S);
}
 break;
case 4:printf ("\nTruth Table for XOR\nA | B | O\n");
printf("____________");
for(a=0;a<=1;a++)
{
 for(b=0;b<=1;b++)
   {
   S=XOR(a,b);
   printf("\n%d | %d |\t%d",a,b,S);
   }
}
 break;

case 5:printf ("\nTruth Table for NAND\nA | B | O\n");
printf("____________");
for(a=0;a<=1;a++)
{
 for(b=0;b<=1;b++)
   {
   S=NAND(a,b);
   printf("\n%d | %d |\t%d",a,b,S);
   }
}
 break;

 case 6:printf ("\nTruth Table for NOR\nA | B | O\n");
 printf("____________");
for(a=0;a<=1;a++)
{
 for(b=0;b<=1;b++)
   {
   S=NOR(a,b);
   printf("\n%d | %d |\t%d",a,b,S);
   }
}
 break;

case 0: exit(0);
 break;
default: printf("\nError");
}
}while(ch!=0);

return 0;

}
int OR(int a, int b)
{
if(a==0 && b==0)
   return 0;
else
   return 1;
}

int AND(int a, int b)
{
if (a==1 && b==1)
   return 1;
else
   return 0;
}

int NOT(int a)
{
if (a==0)
   return 1;
else
   return 0;
}

int XOR(int a,int b)
{
if (a==0 && b==1 || a==1 && b==0)
   return 1;
else
   return 0;
}
int NAND(int a, int b)
{
if(a==1 && b==1)
   return 0;
else
   return 1;
}

int NOR(int a, int b)
{
if(a==0 && b==0)
   return 1;
else
   return 0;
}
