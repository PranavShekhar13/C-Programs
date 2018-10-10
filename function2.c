#include<stdio.h>
int Sum(int,int);
int main()
{
int a,b,c=0;
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);
c=Sum(a,b);
printf("\nThe Sum of two numbers= %d",c);
return 0;
}
int Sum(int x,int y)
{
int z=0;
z=x+y;
return z;
}

