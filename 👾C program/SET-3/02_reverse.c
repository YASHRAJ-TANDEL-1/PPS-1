#include<stdio.h>
#include<conio.h>
void main()
{
    int a,rem,rev=0;                // rem = remainder  &&  rev = reversed number
    printf("Enter the number =");
    scanf("%d",&a);
    while(a!=0)
    {
        rem= a % 10;
        rev= rev * 10 + rem;
        a= a / 10;
    }
    printf("NOW,The number is reversed = %d",rev);
    getch();
}