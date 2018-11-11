#include<stdio.h> /*TYPE 1 */
void fact(); /* NO ARGUMENTS PASSED WITH NO RETURN VALUE */
int main()
{
fact();
return 0;
}
void fact()
{
int n,i,f=1;
printf("Enter the number whose factorial is to be Calculated");
scanf("%d",&n);
for(int i=n;i>=1;i--)
{
f=f*i;
}
printf("\nThe Factorial of the number= %d",f);
}
