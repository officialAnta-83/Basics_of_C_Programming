#include <stdio.h>
int main()
{
int n,i,m=1;
printf("\n\n Enter a number\n\n");
scanf("%d",&n);
printf("\nFactorial of the number: %d\n",n);
for(i=1;i<=n;i++)
{printf("%d",i);
if(i<n)
{
printf("X");
}
m=m*i;
}
printf("\nFactorial of the number is:%d\n",m);
return 0;
}
