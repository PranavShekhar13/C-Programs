#include<stdio.h>
int main()
{
int a[100],n,sq=0;
printf("Enter the Size of the Array");
scanf("%d",&n);
printf("\nEnter the Integer Values"); 
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
sq=a[i]*a[i];
printf("\nSquare of %d = %d",a[i],sq);
}
return 0;
}
