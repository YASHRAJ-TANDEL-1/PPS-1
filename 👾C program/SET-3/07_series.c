#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter value of n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum= sum +(i*i);
    }
    printf("Sum of series =%d",sum);
    getch();
}