#include<stdio.h>
#include<conio.h>
void main()
{
    int a,first,last,sum;
    printf("Enter any number = ");
    scanf("%d",&a);
    last = a % 10;
    first = a;
    while(a>=10)
    {
        a = a / 10;
    }
    first = a;
    sum= first + last;
    printf("Sum = %d",sum);
    getch();
}