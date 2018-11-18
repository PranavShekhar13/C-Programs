#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i;
printf("\nEnter the 1st String:- ");
scanf("%[^\n]",s1);
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
printf("\nThe Second String:- %s",s2);
}
