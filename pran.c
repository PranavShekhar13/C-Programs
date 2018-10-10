#include <stdio.h>
int main()
{
int a,b,s,d,p,div,rem;
printf("Enter two Numbers");
scanf("%d",&a);
scanf("%d",&b);
s=a+b;
d=a-b;
p=a*b;
div=a/b;
rem=a%b;
printf("\nValue of a=%d",a);
printf("\nValue of b=%d",b);
printf("\nSum of 'a' and 'b'=%d",s);
printf("\nDifference of 'a' and 'b'=%d",d);
printf("\nProduct of 'a' and 'b'=%d",p);
printf("\nDividing 'a' by 'b' we get=%d",div);
printf("\nRemainder=%d",rem);
printf("\n");
return 0;
}
