#include<stdio.h>  /* TYPE 4 ARGUMENTS PASSED WITH A RETURN VALUE */
int fact(int n);  
int main()
{
int n,c=0;
printf("Enter the Number whose factorial is to be calculated");
scanf("%d",&n);
c=fact(n);
printf("\nThe factorial of the number= %d",c);
return 0;
}
int fact(int n)
{
int i=0,f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}

return f;
}

