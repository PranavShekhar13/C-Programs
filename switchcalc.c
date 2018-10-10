#include<stdio.h>
int main()
{
int opt,a,b,o;
do
{
printf("\nMenu Driven Calculator:-");
printf("Enter two Numbers");
scanf("%d %d",&a,&b);
printf("\n1Enter '2' for Addition \n2Enter '3' for Subtraction \n3Enter '4' for Multiplication \n4Enter '5' for Division");
printf("\nEnter Your Choice");
scanf("%d",&opt);
switch(opt)
{
case 2:
printf("The Sum of the Numbers= %d",a+b);
break;
case 3:
printf("The Subtraction of the numbers= %d",a-b);
break;
case 4:
printf("The Multiplication of the numbers= %d",a*b);
break;
case 5:
printf("The Division of the numbers= %d",a/b);
break;
default:
printf("Invalid Choice");
}
printf("Enter '1' to Continue and '0' to Exit");
scanf("%d",&o);
}
while(o==1);
return 0;
}
