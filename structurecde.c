#include<stdio.h>
#include<string.h>
struct student
{
char a[100];
float chem;
float math;
float phy;
};
int main()
{
struct student s;
printf("\n Enter name of student\n");
fgets(s.a,sizeof(s.a),stdin);
printf("\n Enter marks in Chemistry\n");
scanf("%f",&s.chem);
printf("\n Enter marks in Maths\n");
scanf("%f",&s.math);
printf("\n Enter marks in Physics\n");
scanf("%f",&s.phy);
printf("\n The result\n");
printf("\n Student name\n");
puts(s.a);
printf("\n Marks in chemistry,maths and physics respectively are:\n");
printf(" %f \n %f \n %f",(s.chem),(s.math),(s.phy));
printf("\n Average of the marks is : %f \n",((s.chem)+(s.math)+(s.phy))/3);
return 0;
}
