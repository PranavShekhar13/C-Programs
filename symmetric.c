#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,trans[100][100],n=0,flag;
        
	printf("Enter the Rows and Columns of the Matrix");
	scanf("%d %d",&r,&c);
	n=r*c;
	printf("\nEnter the %d Elements of the Matrix",n);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The Matrix:-\n");
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("It's Transpose:\n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	flag=1;
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	if(a[i][j]!=trans[i][j])
	flag=0;
	break;
	}
	}
	if(flag==1)
	printf("Symmetric Matrix");
	else
	printf("Matrix Not Symmetric");
		
return 0;
}
