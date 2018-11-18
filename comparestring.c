#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,flag=0;
printf("\nEnter the first string:- ");
gets(s1);
printf("\nEnter the second string :- ");
gets(s2);
for(i=0;s1[i]==s2[i]&&s1[i]!='\0';i++)
{
if(s1[i]>s2[i])
{
flag=1;
break;
}
else if(s1[i]<s2[i])
{
flag=2;
break;
}
else
{
flag=3;
break;
}
}
if(flag==1)
{
printf("String 1 is greater than String 2");
}
else if(flag==2)
{
printf("String 1 is less than String 2");
}
else if(flag==3)
{
printf("Both Strings are Equal");
}

}
