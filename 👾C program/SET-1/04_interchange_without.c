#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter first number =");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n NOW ,first number = %d",a);
    printf("\n NOW ,second number = %d",b);
    getch(); 
}