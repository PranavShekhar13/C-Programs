#include<stdio.h> /*4. TO COUNT DIGITS OF A NUMBER USING RECURSIVE FUNCTION */
int CountDigits(int n);

int main()
{
int n,s=0;
printf("Enter the number whose digits are to be counted");
scanf("%d",&n);
s=CountDigits(n);
printf("The Number of digits= %d",s);
return 0;
}
int CountDigits(int n)
{
static int s=0;
if(n>0)
{
s++;
CountDigits(n/10);
}
else
{
return s;
}
}
