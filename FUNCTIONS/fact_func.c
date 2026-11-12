#include <stdio.h>
#include <stdlib.h>
int factorial(int a)
{
    int fct=1,i;
    for(i=1;i<=a;i++)
    {
        fct=fct*i;
    }
    return fct;
}
int main()
{
    int n;
    printf("\nEnter a number: \n");
    scanf("%d",&n);
    int factres = factorial(n);
    printf("\nFactorial of %d is %d\n\n", n, factres);
    return 0;
}