#include<stdio.h>
int main()
{
char x;
printf("Enter an Alphabet=");
scanf("%c",&x);
if(x>='a'&& x<='z')
{
x=x-32;
printf("\nThe UpperCase of the entered alphabet is %c",x);
} 
else
printf("The Alphabet is already in Upper Case");
return 0;
}
