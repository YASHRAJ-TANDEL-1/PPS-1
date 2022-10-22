#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,n,delete;
    printf("Enter the string you want =");
    gets(str);
    printf("\n Enter the charcter location you want to delete :");
    scanf("%d",&delete);
    n=strlen(str);
    for(i=delete;i<str[i];i++)
    {
        str[i] = str[i+1];
    }
    printf("string after deletion : %s",str);
    getch();
}