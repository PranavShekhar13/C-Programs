#include<stdio.h>
int hcf(int a,int b);
int main()
{
int a,b,res;
printf("Enter the first number");
scanf("%d",&a);
printf("\nEnter the second number");
scanf("%d",&b);
res=hcf(a,b);
printf("The H.C.F of %d and %d = %d",a,b,res);
return 0;
}

int hcf(int a,int b)
{
while(a!=b)
{
if(a>b)
return hcf(a-b,b);
else
return hcf(a,b-a);
}
return a;
}
