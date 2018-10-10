#include<stdio.h>
int main()
{
int n,a=7,s=0;
printf("Enter the Value of n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i==1 || i==2)
printf("%d,",i);
else if(i==3)
printf("%d,",i+4);
else
{
s=(a*2)+1;
a=s;
printf("%d,",s);
}
}
return 0;
}
