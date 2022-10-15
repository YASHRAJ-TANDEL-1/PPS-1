#include<stdio.h>
#include<conio.h>
void main()
{
    int math,sci,SS,BEEE,eng,percentage,total;
    printf("Enter the marks of maths =");
    scanf("%d",&math);
    printf("Enter the marks of science  =");
    scanf("%d",&sci);
    printf("Enter the marks of social studies =");
    scanf("%d",&SS);
    printf("Enter the marks of BEEE =");
    scanf("%d",&BEEE);
    printf("Enter the marks of english =");
    scanf("%d",&eng);
    total= math + sci + SS + BEEE + eng;
    printf("\n TOTAL = %d",total);
    percentage = total / 5;
    printf("\n PERCENTAGE = %d ",percentage);
    if(percentage<=100 && percentage>=80)
    {
        printf("\n STUDENT PASSED WITH DISTINCTION");
    }
    else if(percentage<=79 && percentage>=60)
    {
        printf("\n STUDENT PASSED WITH FIRST CLASS");
    }
    else if(percentage<=59 && percentage>=40)
    {
        printf("\n STUDENT PASSED WITH SECOND CLASS");
    }
    else 
    {
        printf("\n sSTUDENT FAILED ");
    }
    getch();
}