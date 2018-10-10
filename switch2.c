#include<stdio.h>
int main()
{
int a,b;
char c;
float r;
printf("\nEnter '+' for Addition,'-' for Subtraction, '*' for Multiplication and '/ 'for Division");
printf("\nEnter Your Choice");
scanf(" %c",&c);
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);

switch(c)
{
case '+':
r=a+b;
printf("\nResult=%f",r); 
break;
case '-':
r=a-b;
printf("\nResult=%f",r);
break;
case '*':
r=a*b;
printf("\nResult=%f",r);
break;
case '/':
r=a/b;
printf("\nResult=%f",r);
break;
default:
printf("\nInvalid Choice");
}
return 0;
}
