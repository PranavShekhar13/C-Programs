#include<stdio.h>
#include<math.h>   /*6. TO CHECK WHETHER A NO. IS ARMSTRONG OR NOT USING RECURSIVE FUNCTION */
int armstrong(int n);
int main()
{
int n,result;
int b=n;
printf("Enter the number which needs to be checked for Armstrong");
scanf("%d",&n);
result=armstrong(n);
if(result==b)
printf("Armstrong Number");
else
printf("Not an Armstrong Number");
return 0;
}
int armstrong(int n)
{
int result;
if(n==0)
result=0;
else
result=pow(n%10,3)+armstrong(n/10);
return result;
}
