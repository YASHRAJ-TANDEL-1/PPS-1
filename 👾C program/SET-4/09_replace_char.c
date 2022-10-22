#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50],replace,new;
    int i,n;
    printf("Enter the string you want =");
    gets(str);
    printf("\n Enter the charcter you want to replace :");
    scanf("%c",&replace);
    getchar();
    printf("\n Enter the NEW charcter you want :");
    scanf("%c",&new);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        if(str[i] == replace)
        {
            str[i]=new;
        }
    }
    printf("NOW,The new string is : %s",str);
    getch();
}