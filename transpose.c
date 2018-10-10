#include<stdio.h>
void main()
{
	int a[100][100],r,c,i,j,trans[100][100],n=0;

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
	printf("Transpose:\n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}

}
