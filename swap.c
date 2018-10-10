#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two Numbers");
scanf("%d",&a);
scanf("%d",&b);
printf("\nFirst Number=%d",a);
printf("\nSecond Number=%d",b);
c=a;
a=b;
b=c;
printf("\nFirst Number after Swaping=%d",a);
printf("\nSecond Number after Swaping=%d",b);
return 0;
}
