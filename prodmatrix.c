#include<stdio.h>
int main()
{
int a[100][100],b[100][100],s[100][100],r,c,m,n,i,j,k,sum=0;
printf("Enter the Order of the First Matrix");
scanf("%d %d",&r,&c);
printf("Enter the Order of the Second Matrix");
scanf("%d %d",&m,&n);
if(c==m)
{
printf("\nEnter Elements of the First Matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the Elements of the Second Matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("The First Matrix:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("The Second Matrix:-\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<n;j++)
{
s[i][j]=0;
for(k=0;k<c;k++)
{
s[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("The Resultant Matrix after Multiplication:-\n");
for(i=0;i<r;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",s[i][j]);
}
printf("\n");
}
}
else
printf("\nMultiplication Not Possible");
return 0;
}

