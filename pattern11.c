#include<stdio.h>
int main()
{
	int i,j;
	int d1=0,d2=1;
	
    
	for(i=1;i<=6;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2!=0)
			printf("%d",d1);
			else
			printf("%d",d2);
			
		}
		
		printf("\n");
		
	}	
return 0;
}
