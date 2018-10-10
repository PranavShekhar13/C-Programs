#include<stdio.h>
int main()
{
int a,b;
printf("Enter two Numbers");
scanf("%d",&a);
scanf("%d",&b);
printf("\nFirst Number=%d",a);
printf("\nSecond Number=%d",b);
a=a+b;
b=a-b;
a=a-b ;
printf("\nFirst Number after Swaping=%d",a);
printf("\nSecond Number after Swaping=%d",b);
return 0;
}
