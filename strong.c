#include<stdio.h>
int main()
{
int n,a,r,fact,sum=0;
printf("Enter a Number");
scanf("%d",&n);
r=n;
while(n!=0)
{
fact=0;
a=n%10;
for(int i=a;i>0;i--)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
if(r==sum)
printf( "%d is a Strong Number",r);
else
printf("%d is Not a Strong Number",r);
return 0;
}
