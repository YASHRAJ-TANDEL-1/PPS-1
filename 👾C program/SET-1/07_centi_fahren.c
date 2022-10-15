#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("Enter the temperature in centigrade =");
    scanf("%f",&c);
    f= (1.8 * c) + 32;
    printf("CENTIGRADE TO FAHRENHEIT =%f",f);
    getch();
}