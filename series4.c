#include<stdio.h>
int main()
{
int n,a=0,b=1,s;
printf("Enter the Value of n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i==1)
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
