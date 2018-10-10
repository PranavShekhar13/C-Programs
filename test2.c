#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Three Numbers=");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("\n %d is the Greatest",a);
else
printf("\n %d is the Greatest",c);
}
else
{
if(b>c)
printf("\n %d is the Greatest",b);
else
printf("\n %d is the Greatest", c);
}
printf("\n ");
return 0;
}
