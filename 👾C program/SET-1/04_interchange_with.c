#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter first number =");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n NOW ,first number = %d",a);
    printf("\n NOW ,second number = %d",b);
    getch();

}