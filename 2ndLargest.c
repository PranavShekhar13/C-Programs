#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Three Numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a<c)
printf("\n Second Largest Number= %d",a); 
else if(b>a && b<c)
printf("\n Second Largest Number= %d",b);
else 
printf("\nSecond Largest Number= %d",c);
return 0;
}
