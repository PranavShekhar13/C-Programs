#include<stdio.h> /*FACTORIAL USING RECURSIVE FUNCTION */
int main()
{
int n,result;
printf("Enter the number whose factorial is to be calculated");
scanf("%d",&n);
result=factorial(n);
printf("The factorial of the number= %d",result);
return 0;
}
int factorial(int n)
{
int result;
if(n==0)
result=1;
else
result=n*factorial(n-1);
return result;
}
