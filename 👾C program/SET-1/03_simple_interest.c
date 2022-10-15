#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n,SI;
    printf("Enter the principal ammount =");
    scanf("%f",&p);
    printf("Enter the rate of interest =");
    scanf("%f",&r);
    printf("Enter the number of years =");
    scanf("%f",&n);
    SI = (p * r * n) / 100;
    printf("SIMPLE INTEREST = %f",SI);
    getch();
}