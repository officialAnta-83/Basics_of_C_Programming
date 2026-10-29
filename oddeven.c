#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,flgev=0,flgod=0,odd=0,even=0;
printf("\nEnter a number\n");
scanf("%d",&n);
int cpy=abs(n);
while(cpy!=0)
{
    int b = cpy%10;
    if(b%2==0)
    {
        flgev=1;
        if(flgev==1)
        {
            printf("Even:%d\n",b);
        }
        even++;
    }
    else if(b%2!=0)
    {
        flgod=1;
        if(flgod==1)
        {
            printf("Odd:%d\n",b);
        }
        
        odd++;
    }
    cpy = cpy/10;

}

printf("\nEven number count:%d\n",even);
printf("\nOdd number count:%d\n",odd);
return 0;
}
