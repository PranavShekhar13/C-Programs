#include<stdio.h>
int count(int n);
int main()
{
int n,res=0;
printf("Enter the Number whose digits are to be counted");
scanf("%d",&n);
res=count(n);
printf("The number of digits in %d = %d",n,res);
}

int count(int n)
{
static int res=0;
if(n!=0)
{
res++;
count(n/10);
}
return res;
}


