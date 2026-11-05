#include<stdio.h>
int cntdig(int a)
{ int b,cnt=0;
while(a>0)
{
b=a%10;
cnt++;
a/=10;
}
return cnt;
}
int main()
{
int n,b,c,rev;
printf("\n\n Enter a number \n\n");
scanf("%d",&n);
int st=n;
c=cntdig(n);
while(st!=0)
{ b=0;
b=st%10;
rev=rev*10+b;
st=st/10;
}
printf("\n\n Reverse of the number is:%d \n\n",rev);
printf("\n\n No of digits of the number is:%d \n\n",c);
return 0;
}
