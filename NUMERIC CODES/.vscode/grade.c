#include <stdio.h>
int main()
{
int mks;
printf("%-15s Marks\n\n","Remarks");
switch(1)
{
case 1:
printf("%-15s %s\n\n", "90-100", "A+");
case 2:
printf("%-15s %s\n\n", "80-89", "A");
case 3:
printf("%-15s %s\n\n", "70-79", "B");
case 4:
printf("%-15s %s\n\n", "60-69", "C");
case 5:
printf("%-15s %s\n\n", "50-59", "D");
case 6:
printf("%-15s %s\n\n", "Below 50", "F");
break;
default:
printf("\nWrong input\n");
}
printf("\n\nEnter marks\n\n");
scanf("%d",&mks);
if(mks>=90&&mks<=100)
printf("A+\n\n");
if(mks>=80&&mks<=89)
printf("A\n\n");
if(mks>=70&&mks<=79)
printf("B\n\n");
if(mks>=60&&mks<=69)
printf("C\n\n");
if(mks>=50&&mks<=59)
printf("D\n\n");
if(mks<50&&mks>0)
printf("F\n\n");
if(mks<0)
printf("No result\n\n");
return 0;
}
