#include<stdio.h>
int main()
{
char str[100];
char c;
int i,cnt=0,flg=0;
printf("\nEnter a sentence\n");
fgets(str,sizeof(str),stdin);
printf("\nEnter a character to search\n");
scanf("%c",&c);
for(i=0;i<100;i++)
{
if(str[i]==c)
cnt++;
flg=i;
}
printf("\nThe maximum occurence of the character\n");
printf("\nThe number of times character occurs: %d\n",cnt);
return 0;
}
