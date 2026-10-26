#include <stdio.h>
#include <string.h>
int main()
{
int i,n,len,temp =0;
char a[200];
printf("\n Enter a string : \n")
fgets(a,sizeof(a),stdin);
a[strcspn(a,"\n")]='\0';
while(a[len]!='\0')
{
len++;
}
for(i=0;i<len-1;i++)
{
temp =a[0];
for(j=0;j<len-1;j++)
{
a[j]=a[j+1];
}
a[len-1]=temp;
}
printf("\n The new string is :\n");
