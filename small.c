#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Three Numbers");
scanf("%d %d %d",&a,&b,&c);
if(a<b && a<c)
printf("\n Smallest Number= %d",a); 
else if(b<a && b<c)
printf("\n Smallest Number= %d",b);
else
printf("\nSmallest Number= %d",c);
return 0;
}
