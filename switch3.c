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
printf("\nGrade A"); 
break;
case 8:
printf("\nGrade E");
break;
case 7:
printf("\nGrade A");
break;
case 6:
printf("\nGrade B");
break;
case 5:
printf("\nGrade C");
break;
case 4:
printf("\nGrade D");
break;
default:
printf("\nGrade F");
}
return 0;
}
