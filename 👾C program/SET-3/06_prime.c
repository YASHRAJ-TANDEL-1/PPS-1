#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    if(a % 2 == 0)
    {
       printf("! IT IS NOT A PRIME NUMBER !");   
    }
    else
    {
        printf("! IT IS A PRIME NUMBER !");
    }
    getch();
}