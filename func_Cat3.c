#include<stdio.h>  /*TYPE 3 */
void fact(int n);  /*ARGUMENT PASSED BUT NO RETURN VALUE */
int main()
{
int n;
printf("Enter the Number whose factorial is to be calculated");
scanf("%d",&n);
fact(n);
return 0;
}
void fact(int n)
{
int i=0,f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("\nThe factorial of the number= %d",f);
}

