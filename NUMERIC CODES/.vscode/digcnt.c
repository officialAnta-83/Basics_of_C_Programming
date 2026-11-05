#include <stdio.h>
int main()
{
int n, count=0;
printf("Enter a number :");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count ++;
}
printf("\n\n Number of digits = %d \n\n", count);
return 0;
}
