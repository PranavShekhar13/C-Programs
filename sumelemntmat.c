#include<stdio.h>
int main()
{
int a[100][100],r,c,n,i,j,sum=0;
printf("Enter the Order of the Matrix");
scanf("%d %d",&r,&c);
n=r*c;
printf("Enter %d Elements of the Matrix",n);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The Resultant Matrix:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum=sum+a[i][j];
}
}
printf("\nThe Sum of it's Elements=%d",sum);
return 0;
}

