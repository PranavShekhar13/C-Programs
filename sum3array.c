#include<stdio.h>
int main()
{
int a[10],b[10],c[10],i,sum=0;
printf("Enter 10 Integer Values for the First Array");
for(i=0;i<10;i++)
{
scanf("\n%d",&a[i]);
}
printf("\nEnter 10 Integer values for the Second Array");
for(i=0;i<10;i++)
{
scanf("\n%d",&b[i]);
}
for(i=0;i<10;i++)
{
sum=a[i]+b[i];
printf("\nSum of %d & %d= %d",a[i],b[i],sum);
}
return 0;
}
