#include<stdio.h>
int main()
{
int n,a=0,b=1,s;
printf("Enter the Value of n");
scanf("%d",&n);
for(int i=0;i<=n-1;i++)
{
if(i==0||i==1)
printf("%d ,",i);
else
{
s=a+b;
a=b;
b=s;
printf("%d ,",s);
}
}
return 0;
}
