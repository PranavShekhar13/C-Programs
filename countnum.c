#include<stdio.h>
int main()
{
int n,a=0,s=0;
printf("Enter the Value of n");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
s=s+1;
n=n/10;
}
printf("The Total Number of Digits= %d",s);
return 0;
}
