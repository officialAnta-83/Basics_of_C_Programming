#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("\nEnter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nThe factorial of the number %d is:%d\n",n,fact);
}