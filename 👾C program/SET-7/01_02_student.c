#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    char name[50],branch[10];
    float marks;
}s[10];
void main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("---------------------------------------\n");
        printf("Enter Student Name:");
        scanf("%s",&s[i].name);
        printf("Enter student Branch:");
        scanf("%s",&s[i].branch);
        printf("Total Marks:");
        scanf("%d",&s[i].marks);
	}
	for(i=0;i<10;i++)
	{
        printf("---------------------------------------\n");
        printf("Student Name:%s\n",s[i].name);
        printf("Student Branch:%s\n",s[i].branch);
        printf("Total Marks:%d\n",s[i].marks);
    }
    getch();
}