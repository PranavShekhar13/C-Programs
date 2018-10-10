#include<stdio.h>
void main()
{
int x,i,j;
scanf("%d",&x);
while(x!=0)
{
for(int i=0;i<=x;i++)
{
for(int j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
}
