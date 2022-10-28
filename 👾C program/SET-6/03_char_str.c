#include<stdio.h>
#include<conio.h>
void main()
{
    char a[50],*b;
    printf("Enter string :");
    gets(a);
    b=a;
    while(*b != '\0')
    {
        printf("Entered string is :%c \n",*b++);
        printf("------------------------------\n");
    }
    getch();
}