#include <stdio.h>
int main()
{
int n, a[100], i,s=0;
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the elements of array ");
for(i=0;i<=n-1;i++)
{
scanf("%d", &a[i]);
s=s+a[i];
}
printf("\n\n Sum of elements of array \n\n%d",s);
return 0;
}
