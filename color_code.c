#include<stdio.h>
int main()
{
char c;
printf("\nEnter 'B' for Blue, 'G' for Green, 'R'for Red");
printf("\nEnter your choice");
scanf(" %c",&c);
switch(c)
{
case 'B':
printf("\nBLUE"); 
break;
case 'G':
printf("\nGREEN");
break;
case 'R':
printf("\nRED");
break;
default:
printf("\nInvalid Choice");
}
return 0;
}
