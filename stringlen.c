#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,len=0;
printf("Enter The String");
scanf("%[^\n]",a);
for(int i=0;a[i]!='\0';i++)
{
len=len+1;
}
printf("Length of the String=%d",len);
}
