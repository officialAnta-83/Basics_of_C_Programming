#include <stdio.h>
#include <stdbool.h>
int prime(int a)
{
    int i,cnt=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{    

    int n;
    printf("\nEnter a number: \n");
    scanf("%d",&n);
    int primres = prime(n);
    if(primres==1)
    {
        printf("\n%d is a prime number\n\n", n);
    }
    else
    {
        printf("\n%d is not a prime number\n\n", n);
    }
    return 0;
}
    

