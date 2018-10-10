#include<stdio.h>
void Sum(int,int);
int main()
{
int a,b,c=0;
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);
Sum(a,b);
return 0;
}
void Sum(int x,int y)
{
int z=0;
z=x+y;
printf("Addition of two Numbers=%d",z);
}

