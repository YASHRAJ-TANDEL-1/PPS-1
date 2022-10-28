#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*x,*y,p;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("BEFORE SWAPPING YOUR \n FIRST NUMBER IS : %d \n SECOND NUMBER IS : %d",a,b);
    printf("\n---------------------------------------------------------------------------\n");
    x=&a;
    y=&b;
    p=*x;
    *x=*y;
    *y=p;
    printf("AFTER SWAPPING YOUR \n FIRST NUMBER IS : %d \n SECOND NUMBER IS : %d",a,b);
    getch();
}