#include<stdio.h>
#include<conio.h>
void main()
{
    int temp,a;
    temp = 1;
    printf("Enter the number =");
    scanf("%d",&a);
    while(a>1)
    {
        temp= temp * a;
        a=a-1;
    }
    printf("FACTORIAL = %d",temp);
    getch();
}