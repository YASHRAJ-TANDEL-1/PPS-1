#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,add,sub,multi,div;
    printf("Enter the first number =");
    scanf("%d",&a);
    printf("Enter the second number =");
    scanf("%d",&b);
    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
    printf("\n ADDITION = %d",add);
    printf("\n SUBTRACTION = %d",sub);
    printf("\n MULTIPILCATION = %d",multi);
    printf("\n DIVISION = %d",div);
    getch();
}