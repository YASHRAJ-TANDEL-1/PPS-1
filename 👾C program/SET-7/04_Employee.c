#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    char name[50];
    int salary;
}e[10];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("---------------------------------------\n");
        printf("Enter employee name:");
        scanf("%s",&e[i].name);
        printf("salary:");
        scanf("%d",&e[i].salary);
	}
	for(i=0;i<5;i++)
	{
        printf("---------------------------------------\n");
        printf("EMPLOYEE NAME :%s\n",e[i].name);
        printf("EMPLOYEE SALARY :%d\n",e[i].salary);
    }
    getch();
}