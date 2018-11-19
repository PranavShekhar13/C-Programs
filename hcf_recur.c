#include<stdio.h>  /*8. TO FIND HCF OF TWO NUMBERS USING RECURSIVE FUNCTION*/ 
int HCF(int a,int b);
int main()
{
int a,b,res=0;
printf("Enter the first number");
scanf("%d",&a);
printf("\nEnter the second number");
scanf("%d",&b);
res=HCF(a,b);
printf("The HCF of %d and %d = %d",a,b,res);
return 0;
}

int HCF(int a,int b)
{
if(a>b)
{
HCF(a-b,b);
}
else if(a<b)
{
HCF(a,b-a);
}
else
{ 
return a;
}

}
