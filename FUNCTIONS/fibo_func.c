#include <stdio.h>

void fibo(int q)
{
    int a = 0, b = 1, c = 0;

    printf("Fibonacci sequence up to %d: ", q);

    while (a <= q)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("\nEnter a number: \n");
    scanf("%d", &n);
    
    fibo(n);
    
    return 0;
}
