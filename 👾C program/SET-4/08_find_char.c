#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50],find;
    int i,n,flag=0;
    printf("Enter the string you want =");
    gets(str);
    n=strlen(str);
    printf("\n Enter the charcter to find its position :");
    scanf("%c",&find);
    for(i=0;i<n;i++)
    {
        if(str[i]==find)
        {
            printf("charcter position : %d \n",i+1);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("charcter not found");
    }
    getch();
}