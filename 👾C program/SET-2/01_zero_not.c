#include<stdio.h>
#include<conio.h>
void main()
{
    float x;
    printf("ENTER THE VALUE =");
    scanf("%f",&x);
    if(x==0)
    {
        printf("THE NUMBER IS ZERO");
    }
    else if(x > 0)
    {
        printf("THE NUMBER IS POSITIVE");
    }
    else if(x < 0)
    {
        printf("THE NUMBER IS NEGATIVE");
    }
    getch();
}