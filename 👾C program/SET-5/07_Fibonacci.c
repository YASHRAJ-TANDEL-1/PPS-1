#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{	int j, i;

	printf("Enter the number of element:");
	scanf("%d",&j);
	printf("fibonacci series is:");
	for(i=0;i<j;i++)
	{
		printf("%d ",fibonacci(i));
	}
	getch();
}
int fibonacci(int i)
{	if(i==0)
    {
	    return 0;
    }
	else if(i==1)
    {
	    return 1;
    }
	else
    {
	    return (fibonacci(i-1)+fibonacci(i-2));
    }
}