#include<stdio.h>
int main()
{
int m;
printf("\n Enter the marks");
scanf("%d",&m);
if(m<=100 && m>80)
printf("Result = Pass with Honours");
else if(m<=80 && m>60)
printf("Result = First Division");
else if(m<=60 && m>50)
printf("Result = Second Division");
else
printf("Result = Fail");
return 0;
}
