#include<stdio.h>
int main()
{
int n,b,s;
printf("Enter a Number");
scanf("%d",&n);
b=n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
s=s+i;
}
s=s-n;
if(s==b)
printf("Perfect Number");
else
printf("Not Perfect Number");
return 0;
}
