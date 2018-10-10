#include<stdio.h>
int main()
{
int arr[10];
printf("Enter Array Elements ");
int i,j,sum=0;
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<10;j++)
{
sum=sum+arr[j];
}
printf("\n The sum of all Elements= %d",sum);
return 0;
} 

