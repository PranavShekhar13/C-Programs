#include<stdio.h>
int main()
{
int a[100],n,i,sumo,sume=0;
printf("Enter the Size of the Array");
scanf("%d",&n);
printf("\nEnter the Values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
sume=sume+a[i];
}
else if(a[i]%2!=0)
{
sumo=sumo+a[i];
}
}
printf("\nSum of Even Numbers= %d",sume);
printf("\nSum of Odd Numbers= %d",sumo);
return 0;
}
