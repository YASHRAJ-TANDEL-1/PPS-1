#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("ENTER A NUMBER =");
    scanf("%d",&a);
    if(a % 2 == 0)
    {
        printf("the last digit is even");
    }
    else
    {
        printf("the last digit is odd");
    }
    getch();
}