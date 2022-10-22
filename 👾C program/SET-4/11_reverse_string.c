#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];
    printf("Enter the string you want =");
    gets(str);
    strrev(str);
    printf("REVERSED STRING :%s ",str);
    getch();
}