#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,v,c=0;
printf("Enter the Sentence:-");
scanf("%[^\n]",s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
v=v+1;
}
else
{
c=c+1;
}
}
printf("The number of vowels in the Sentence= %d \n",v);
printf("\n The number of consonants in the sentence= %d",c);
return 0;
}
