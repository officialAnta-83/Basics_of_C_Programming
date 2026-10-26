#include <stdio.h>
int main()
{
int n,i,s=0;
printf("Enter a number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=s+(i*i);
}
printf("\n\n Sum of natural numbers \n\n %d",s);
return 0;
}
