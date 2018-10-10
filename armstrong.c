#include<stdio.h>
int main()
{
int n,a,b,d=0,sum=0;
printf("Enter a Number");
scanf("%d",&n);
b=n;
while(n!=0)
{
a=n%10;
d=a*a*a;
sum=sum+d;
n=n/10;
}
if(sum==b)
printf("Armstrong Number");
else
printf("Not Armstrong Number");
return 0;
}
