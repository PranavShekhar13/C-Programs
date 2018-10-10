#include<stdio.h>
int main()
{
int x,y;
printf("Enter the value of 'x' and 'y' ");
scanf("%d %d",&x,&y);
for(int i=x;i<=y;i++)
{
printf("%d",i);
printf("\n");
}
return 0;
}
