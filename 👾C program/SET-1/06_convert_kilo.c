#include<stdio.h>
#include<conio.h>
void main()
{
    float kilo,meter,feet,inche,cm;
    printf("Enter the distance in kilometer =");
    scanf("%f",&kilo);
    meter= kilo * 1000;
    feet= kilo * 3281;
    inche= kilo * 39370;
    cm= kilo / 100000;
    printf("\n kilometer to meter = %f",meter);
    printf("\n kilometer to feet = %f",feet);
    printf("\n kilometer to inches = %f",inche);
    printf("\n kilometer to centimeter = %f",cm);
    getch();
}