#include<stdio.h>
int main()
{
int a,b,s=0;
printf("Enter the Range");
scanf("%d %d",&a,&b);
for(int i=a;i<=b;i++)
{
if(a%i==0)
{
s=s+1;
}
if(s<=2)
{
printf(",%d",i);
}
}
printf("\n");
return 0;
}
