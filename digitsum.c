#include<stdio.h>
int main()
{
int n,a,sum=0;
printf("Enter a Number");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("The Sum of it's Digits =%d",sum);
return 0;
}
