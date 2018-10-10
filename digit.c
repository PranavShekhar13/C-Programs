#include<stdio.h>
int main()
{
int n;
printf("Enter a Number=");
scanf("%d",&n);
if(n>=0&&n<=9)
printf("\nSingle Digit Number"); 
else if(n>=10&&n<=99)
printf("\nTwo Digit Number");
else if(n>=100&&n<=999)
printf("\nThree Digit Number");
else if(n>=1000&&n<=9999)
printf("\nFour Digit Nymber");
else
printf("\nMore than 4 Digit");
return 0;
}
