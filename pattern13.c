#include<stdio.h>
int main()
{
for(int i=1;i<=4;i++)
{
for(int j=1;j<=4-i;j++)
printf(" ");
for(int k=1;k<=i;k++)
printf("*");
printf("\n");
}
for(int a=1;a<=3;a++)
{
for(int b=3;b>3-a;b--)
printf(" ");
for(int c=3;c>=a;c--)
printf("*");
printf("\n");
}
}
