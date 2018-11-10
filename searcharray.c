#include<stdio.h>
int main()
{
int a[100],n,e,i,flag;
printf("Enter the Size of the Array");
scanf("%d",&n);
printf("\nEnter the Integer Values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the Element to be Searched in the Array");
scanf("%d",&e);
for(i=0;i<n;i++)
{
if(a[i]==e)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("The Element Exists, It's Index value= %d",i);
}
else
{
printf("Element does not Exists!!");
}
return 0;
}
