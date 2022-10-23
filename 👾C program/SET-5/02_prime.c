#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
    int n,a;
    printf("Enter the number :");
    scanf("%d",&n);
    a=prime(n);
    if(a==1)
    {
        printf("\n %d is prime number",n);
    }
    else
    {
        printf("\n %d is not a prime number",n);
    }
    getch();

}
int prime (int p)
{
    if(p%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}