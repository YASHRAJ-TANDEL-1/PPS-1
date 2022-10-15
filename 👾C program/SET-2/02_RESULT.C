#include<stdio.h>
#include<conio.h>
int main()
{
    int math,sci,SS,BEEE,eng,percentage;
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
    percentage = (float)(math+ sci+ SS+ BEEE+ eng) / 5;
    if(percentage >= 35)
    {
        printf("STUDENT IS PASSED");
    }
    else
    {
        printf("STUDENT IS FAILED");
    }
    getch();
}