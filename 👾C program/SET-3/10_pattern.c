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
            printf(" %d",c+1);
        }
        printf("\n");
    }
    printf("\n ---------------------------------------------------------------\n");
    // 2)
    for(i=0;i<=r;i++)
    {
        for(c=0;c<r-i;c++)
        {
            printf(" %d",c+1);
        }
        printf("\n");
    }
    printf("\n ---------------------------------------------------------------\n");
    // 3)
    for(i=0;i<r;i++)
    {
        for(c=0;c<r-i;c++)
        {
            printf(" %d",r-i);
        }
        printf("\n");
    }
    printf("\n ---------------------------------------------------------------\n");
    // 4)
    for(i=0;i<r;i++)
	{
		for(c=0;c<=i;c++)
		{
			printf(" %d",i+1);
		}
		printf("\n");
	}
    getch();
}