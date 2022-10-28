#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*x,*y,sum;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    x=&a;
    y=&b;
    sum=*x+*y;
    printf("SUM OF TWO NUMBERS IS : %d",sum);
    getch();
}