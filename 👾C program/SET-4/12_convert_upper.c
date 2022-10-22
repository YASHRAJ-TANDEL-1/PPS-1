#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];
    printf("Enter the string you want =");
    gets(str);
    strupr(str);
    printf("string in UPPER case :%s \n",str);
    printf("------------------------------------------------\n ");
    printf("Enter the string you want =");
    gets(str);
    strlwr(str);
    printf("string in LOWER case :%s",str);
    getch();
}