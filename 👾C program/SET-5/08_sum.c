#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{   
    int j,k;
    printf("Enter any number:");
    scanf("%d",&j);
    k=sum(j);
    printf("Sum of digits is %d",k);
    getch();
}
int sum(int j)
{   if (j==0)
    {   
        return 0;
    }
    return(j % 10 + sum(j/10));
}