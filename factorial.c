#include<stdio.h>
int main()
{
int n,f=1;
printf("Enter the Number");
scanf("%d",&n);
for(int i=n;i>=1;i--)
{
f=f*i;
}
printf("Factorial= %d",f);
return 0;
}
