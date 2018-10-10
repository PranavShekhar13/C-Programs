#include<stdio.h>
int main()
{
int a[100],n,i,counto=0,counte=0;
printf("Enter the Size of the Array");
scanf("%d",&n);
printf("\nEnter the Values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
counte=counte+1;
}
else if(a[i]%2!=0)
{
counto=counto+1;
}
}
printf("\nNumber Even Values= %d",counte);
printf("\nNumber of Odd Values= %d",counto);
return 0;
}
