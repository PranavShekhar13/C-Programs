#include<stdio.h>
int main()
{
for(int i=1;i<=3;i++)
{
for(int j=3;j>=3-i;j--)
printf(" ");
for(int k=3;k>=i;k--)
printf("*");
printf("\n");
}
}
