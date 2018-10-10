#include<stdio.h>
int main()
{
int a[50],i,n,large;
printf("Enter How Many Numbers");
scanf("%d",&n);

printf("\nEnter the Array Elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
}
printf("\n The Largest Element in the Array= %d",large);
return 0;
}
