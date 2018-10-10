#include<stdio.h>
int main()
{
int marks,index;
printf("Enter the Marks of a Student");
scanf("%d",&marks);
index=marks/10;
switch(index)
{
case 10:
case 9:
case 8:
printf("\nHonours"); 
break;
case 7:
case 6:
printf("\nFirst Division");
break;
case 5:
printf("\nSecond Division");
break;
case 4:
printf("\nThird Division");
break;
default:
printf("\nFail");
}
return 0;
}
