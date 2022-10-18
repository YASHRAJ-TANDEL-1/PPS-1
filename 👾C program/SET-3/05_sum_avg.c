#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,sum=0;
    float avg;
    printf("\n Enter the how many number you want =");
    scanf("%d",&a);
    printf("\n Enter the numbers one by one :- \n");
    printf("\n");
    for(i=0;i<a;++i)
    {
        scanf("%d",&b);
        sum = sum + b;
    }
    avg = sum / a ;
    printf("\n SUM = %d",sum);
    printf("\n AVERAGE = %f",avg);
    getch();
}