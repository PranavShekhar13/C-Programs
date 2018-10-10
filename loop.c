#include<stdio.h>
int main()
{
int x;
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
