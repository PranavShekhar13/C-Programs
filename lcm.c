#include<stdio.h>
int main()
{
int a,b,min_mul=0;
printf("Enter two Numbers");
scanf("%d %d",&a,&b);
if(a>b)
{
min_mul=a;
}
else
{
min_mul=b;
}
while(1)
{
if(min_mul%a==0 && min_mul%b==0)
{
printf("The LCM of %d and %d is %d",a,b,min_mul);
break;
}
++min_mul;
}
return 0;
}
