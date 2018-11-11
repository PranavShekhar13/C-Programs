#include<stdio.h>  /*TYPE 2 */
int fact();  /*NO ARGUMENTS PASSED WITH A RETURN VALUE */
int main()
{

int n,i,f=1;
n=fact();
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("\nThe factorial of the number= %d",f);
return 0;
}
int fact()
{
int n;
printf("Enter the Number whose factorial is to be calculated");
scanf("%d",&n);
return n;
}



