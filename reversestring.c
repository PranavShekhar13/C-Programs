#include<stdio.h>
#include<string.h>
void main()
{
char s[100],r[100];
int count,begin,end=0;
printf("Enter the String to be reversed");
gets(s);
while(s[count]!='\0')
{
count++;
}
end=count-1;
for(begin=0;begin<count;begin++)
{
r[begin]=s[end];
end--;
}
r[begin]='\0';
printf("Reverse of the String:- %s",r);
}

