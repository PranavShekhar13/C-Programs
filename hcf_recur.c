#include<stdio.h>  /*8. TO FIND PRODUCT OF TWO NUMBERS USING RECURSIVE FUNCTION*/ 
int product(int a,int b);
int main()
{
int a,b,res=0;
printf("Enter the first number");
scanf("%d",&a);
printf("\nEnter the second number");
scanf("%d",&b);
res=product(a,b);
printf("The product of %d and %d = %d",a,b,res);
return 0;
}

int product(int a,int b)
{
if(a<b)
{
return product(b,a);
}
else if(b!=0)
{
return (a+product(a,b-1));
}
else
{ 
return 0;
}

}
