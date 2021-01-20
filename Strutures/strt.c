#include<stdio.h>
struct address
{
int houseno;
char city[20];
char state[20];
};
struct employee
{
int id;
char name[20];
char designation[20];
float salary;
struct address add;
}emp;
int main()
{
printf("enter id");
scanf("%d",&emp.id);
printf("\n enter name");
scanf("%s",emp.name);
printf("\n enter designation");
scanf("%s",emp.designation);
printf("\n enter salary");
scanf("%f",&emp.salary);
printf("\n enter houseno");
scanf("%d",&emp.add.houseno);
printf("\n enter city");
scanf("%s",emp.add.city);
printf("\n enter state");
scanf("%s",emp.add.state);
printf("The details are %d %s %s %f %d %s %s ",emp.id,emp.name,emp.designation,emp.salary,
emp.add.houseno,emp.add.city,emp.add.state);
}