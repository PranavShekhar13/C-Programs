#include<stdio.h>
int main()
{
int a[10],sum,av=0;
printf("Enter 10 Integer Values");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum= %d",sum);
av=sum/10;
printf("\nAverage= %d",av);
return 0;
}
