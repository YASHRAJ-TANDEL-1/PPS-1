#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n[10];
    printf("Enter the number :- \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        if(n[i]%2==0)
        {
            printf("%d is EVEN number \n",n[i]);
        }
        else
        {
            printf("%d is ODD number \n",n[i]);
        }
    }
    getch();
}