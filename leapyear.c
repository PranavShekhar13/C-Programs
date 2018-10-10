#include<stdio.h>
int main()
{
int x;
printf("Enter a Year=");
scanf("%d",&x);
if(x%4==0&& x%100!=0||x%400==0)
printf("\nLeap Year"); 
else
printf("\n Not a Leap Year");
return 0;
}
