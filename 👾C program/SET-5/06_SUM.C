#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{      
    int n;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Sum of numbers:%d",sum(n));
	getch();
}
int sum(int n)
{	if(n)
	{ 
        return(n+sum(n-1));
	}
	return 0;
}