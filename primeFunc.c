#include<stdio.h>  /* 7. TO CHECK A NUMBER IS PRIME OR NOT USING NON RECURSIVE FUNCTION */
void prime(int n);  
int main()
{
int n;
printf("Enter the Number which needs to be checked for prime");
scanf("%d",&n);
prime(n);
return 0;
}
void prime(int n)
{
int i,s=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
s=s+1;
}
if(s<=2)
printf("\n %d is Prime",n);
else
printf("\n %d is not Prime",n);
}

