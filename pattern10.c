#include<stdio.h>
int main()
{
for(int r=1;r<=4;r++)
{
for(int c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}

for(int a=1;a<=3;a++)
{
for(int b=3;b>=a;b--)
{
printf("*");
}
printf("\n");
}
}
