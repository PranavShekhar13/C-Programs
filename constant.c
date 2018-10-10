#include<stdio.h>
int main()
{
char x;
printf("Enter a Character=");
scanf("%c",&x);
if(x>=48 && x<=57)
printf("\nDigit"); 
else if(x>=65 && x<=90)
printf("\nUpper Case");
else if(x>=97 && x<=122)
printf("\nLower Case");
else
printf("\nSymbol");
return 0;
}
