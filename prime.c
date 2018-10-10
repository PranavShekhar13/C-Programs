#include<stdio.h>
int main()
{
int n,s=0;
printf("Enter a Number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
s=s+1;
}
if(s<=2)
printf("Prime Number");
else
printf("Not Prime Number");
printf("\n");
return 0;
}
