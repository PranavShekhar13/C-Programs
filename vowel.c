#include<stdio.h>
int main()
{
char c;
printf("enter a character: ");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("character  %c is vowel",c);
}
else
{
printf("character  %c is not vowel",c);
}
return 0;
}
