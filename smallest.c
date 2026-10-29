#include<stdio.h>
int main()
{
int n,max=0,min=9;
printf("\n Enter a number : \n");
scanf("%d",&n);
int cpy=n;
while(cpy!=0)
{
int b= cpy%10;
if(b>max)
max=b;
else if(b<min)
min=b;
cpy= cpy/10;
}
printf("\n The maximum value is :%d \n",max);
printf("\n The minimum value is :%d \n",min);
return 0;
}
