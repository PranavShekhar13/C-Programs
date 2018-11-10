#include<stdio.h>  /* 2. TO FIND REVERSE OF A NUMBER USING FUNCTION */
int rev(int n);  
int main()
{
int n,r=0;
printf("Enter the Number whose reverse is to be displayed");
scanf("%d",&n);
r=rev(n);
printf("\nThe reverse of the number= %d",r);
return 0;
}
int rev(int n)
{
int a,r=0;
while(n!=0)
{
a=n%10;
r=r*10+a;
n=n/10;
}

return r;
}

