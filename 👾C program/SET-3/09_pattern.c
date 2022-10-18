#include<stdio.h>
#include<conio.h>
void main()
{
    int i,c,r;
    printf("Enter number of rows = ");
    scanf("%d",&r);
    printf("\n ---------------------------------------------------------------\n");
    // 1)
    for(i=0;i<r;i++)
    {
        for(c=0;c<=i;c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n ---------------------------------------------------------------\n");
    // 2)
    for(i=0;i<r;i++)
    {
        for(c=i+1;c<r;c++)
        {
            printf(" ");
        }
        for(c=0;c<=i;c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n ---------------------------------------------------------------\n");
    // 3)
    for(i=0;i<=r;i++)
    {
        for(c=r;c>=i;c--)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
}