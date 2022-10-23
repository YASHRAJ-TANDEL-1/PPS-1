#include<stdio.h>
#include<conio.h>
int add(int);
int main()
{
    int a;
    printf("Enter the number you want to add till =");
    scanf("%d",&a);
    printf("The sum of number is :%d",add(a));
    return 0;
}
int add(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + add(n-1);
    }
}