#include<stdio.h>
int main()
{
float p,r,si,t,a;
printf("\nEnter the Principal,Rate and Time");
scanf("%f",&p);
scanf("%f",&r);
scanf("%f",&t);
si=p*r*t/100;
a=p+si;
printf("\nSimple Interest=%f",si);
printf("\nAmount=%f",a);
return 0;
}
