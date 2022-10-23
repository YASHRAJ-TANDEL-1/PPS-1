#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int j,k;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&j);
	k=factorial(j);
	printf("Factorial of the number is:%d",k);
	getch();
}
int factorial(int j)
{	if(j==0)
	{ 
        return 1;
	}
	return(j*factorial(j-1));
}