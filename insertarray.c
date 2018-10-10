#include<stdio.h>
int main()
{
int a[100],position,i,n,value;
printf("Enter the Size of the Array");
scanf("%d",&n);
printf("\nEnter the Values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the location where you want to insert an element");
scanf("%d",&position);
printf("Enter the value you want to insert");
scanf("%d",&value);

for(i=n-1;i>=position-1;i--)
{
a[i+1] = a[i];
}
a[position-1] = value;
printf("\nResultant Array :-");
for(i=0;i<=n+1;i++)
{
printf("\n%d",a[i]);
}
return 0;
}
