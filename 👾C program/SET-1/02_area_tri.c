#include<stdio.h>
#include<conio.h>
void main()
{
    float area,h,b;
    printf("Enter the height of triangle =");
    scanf("%f",&h);
    printf("Enter the base of the triangle =");
    scanf("%f",&b);
    area = 0.5 * h * b;
    printf("AREA OF TRIANGEL = %f",area);
    getch();
}