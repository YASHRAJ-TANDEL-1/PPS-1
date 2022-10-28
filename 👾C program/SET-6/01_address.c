#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*b;
    printf("Enter any value :");
    scanf("%d",&a);
    b=&a;
    printf("Address of pointer : %p \n",b);
    printf("value of number : %d",*b);
    getch();
}