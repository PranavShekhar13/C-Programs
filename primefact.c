#include<stdio.h>
int main()
{
int n,s;
printf("Enter the Value of n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
s=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
s=s+1;
}
if(s==2)
printf("%d ,",i);
}
}
return 0;
}
