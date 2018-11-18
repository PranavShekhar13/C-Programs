#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i,n=0;
printf("Enter the Sentence");
scanf("%[^\n]",s);
n=strlen(s);
for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			printf("%c \n",s[i+1]);
		}
         else if(i==0)
         {
          printf("\n %c",s[i]);
         }

	}

}
