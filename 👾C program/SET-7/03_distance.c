#include<stdio.h>
#include<conio.h>
struct distance
{
    int feet,inches;
}d1,d2,sum;

int main()
{
    printf("Enter data for 1st distance \n");
    printf("Enter feet :");
    scanf("%d",&d1.feet);
    printf("Enter inches :");
    scanf("%d",&d1.inches);
    printf("---------------------------------\n");
    printf("Enter data for 2nt distance \n");
    printf("Enter feet :");
    scanf("%d",&d2.feet);
    printf("Enter inches :");
    scanf("%d",&d2.inches);
    printf("---------------------------------\n");
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if(sum.inches > 12);
    {
        sum.inches = sum.inches - 12;
        sum.feet++;
    }
    printf("Sum of distance : %d feet , %d inches ",sum.feet,sum.inches);
    getch();
}
