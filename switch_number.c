#include<stdio.h>
int main()
{
int n;
printf("\nEnter Number smaller than 5 to display it in words");
printf("\nEnter your choice");
scanf(" %d",&n);
switch(n)
{
case 1:
printf("\nONE"); 
break;
case 2:
printf("\nTWO");
break;
case 3:
printf("\nTHREE");
break;
case 4:
printf("\nFOUR");
break;
case 5:
printf("\nFIVE");
default:
printf("\nInvalid Choice");
}
return 0;
}
