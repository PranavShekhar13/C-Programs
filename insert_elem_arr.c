#include<stdio.h>
int main()
{
int arr[11],a,b,i,temp;
printf("Enter Array Elements");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter 1 more Element with the position to insert");
scanf("%d %d",&a,&b);
for(int j=10;j>b-1;j++)
{
a[i]=temp;
a[i+1]=a[i];
temp=a[i+1];
}
for(i=0;i<10;i++)
{
printf("\n %d",arr[i]);
}
return 0;
}
