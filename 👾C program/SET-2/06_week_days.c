#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
                printf("SUNDAY");
                break;
        case 2:
                printf("MONDAY");
                break;
        case 3:
                printf("TUESDAY");
                break;
        case 4:
                printf("WEDNESDAY");
                break;
        case 5:
                printf("THUSDAY");
                break;
        case 6:
                printf("FRIDAY");
                break;
        case 7:
                printf("SATURDAY");
                break;
        default:
                printf("NUMBER IS INVALID");
                break;
    }
    getch();
}