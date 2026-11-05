#include <stdio.h>
int main()
{
int n,i;
printf("\n\n Enter a number\n\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf(" %d X %d = %d \n\n",n ,i,(n*i));
}
return 0;
}
