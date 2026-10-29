#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
char nm[100];
int roll;
float cmarks;
float mmarks;
};
int main()
{
struct student std[10];
int n,i,cmaxmks=0,mmaxmks=0,flag=0,top=0;
printf("\nEnter the number of student\n");
scanf("%d",&n);
if(n!=0)
{
for(i=0;i<n;i++)
{
printf("\nEnter name of the student\n");
scanf(" %[^\n]",std[i].nm);
printf("\nEnter the roll no of student\n");
scanf("%d",&std[i].roll);
printf("\nEnter the marks in computer\n");
scanf("%f",&std[i].cmarks);
printf("\nEnter the marks in maths\n");
scanf("%f",&std[i].mmarks);
}
printf("\n\n\n  NAME  ROLL NO  COMPUTER_MARKS   MATHS_MARKS \n\n\n");
printf("\n\n------------------\n\n");
for(i=0;i<n;i++)
{
printf(" %s  % d  %f  %f \n",std[i].nm,std[i].roll,std[i].cmarks,std[i].mmarks);
}
for(i=0;i<n;i++)
{
cmaxmks=std[0].cmarks;
mmaxmks=std[0].mmarks;
if((std[i].cmarks>cmaxmks) && (std[i].mmarks>mmaxmks))
{
flag=1;
top=i;
}
if(flag==1)
{
printf("\n The student with maximum marks\n%d %f %f\n",std[top].roll,std[top].cmarks,std[top].mmarks);
}
}
}
else 
printf("\nWrong input\n");
return 0;
}
