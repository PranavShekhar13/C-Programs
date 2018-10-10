#include<stdio.h>
int main()
{
int a[100][100],r,c,i,j,n=0,sum=0;
printf("Enter the Order of the Square Matrix");
scanf("%d %d",&r,&c);
n=r*c;
printf("\nEnter the %d Elements of the Square Matrix",n);
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
if(i==j)
sum=sum+a[i][j];
}
}
printf("\nThe Trace of The Matrix=%d",sum);
return 0;
}

