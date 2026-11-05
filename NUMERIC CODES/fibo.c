#include<stdio.h>
int main()
{
int n,i,a=0,b=1,s=0;
printf("\n\nEnter a number\n\n");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("%d\n",a);
s=a+b;
a=b;
b=s;
}
return 0;
}
