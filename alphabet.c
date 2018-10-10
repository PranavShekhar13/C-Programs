#include<stdio.h>
int main()
{
char x;
printf("Enter a Character=");
scanf("%c",&x);
if(x>=65 && x<=90||x>=97 && x<=122)
{
if(x=='A'||x=='E'|| x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
printf("\nVowel"); 
else
printf("\nConsonant");
}
else
printf("\nNot an Alphabet");
return 0;
}
