#include<stdio.h>
#include<conio.h>
int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(prime(n))
	{	
        printf("%d is an Prime number\n",n);
	}
	else
	{	
        printf("%d is not a Prime number\n",n);
	}
    if(armstrong(n))
	{	
        printf("%d is an armstrong number\n",n);
	}
	else
	{	
        printf("%d is not an armstrong number\n",n);
	}
	if(perfect(n))
	{	
        printf("%d is an perfect number\n",n);
	}
	else
	{	
        printf("%d is not a perfect number\n",n);
	}
	getch();

}
int prime(int n)
{
    int i;
	for(i=2;i<n/2;i++)
	{	
        if(n%i==0)
		{  
             return 0;
		}
	}
	return 1;
}
int armstrong(int n)
{
    int l,sum=0;
	while(n!=0)
	{   
        l=n%10;
	    sum+=l*l*l;
	    n=n/10;
	}
	if(n==sum)
	{ 
        return 0;
	}
    else
    {
	    return 1;
    }
}
int perfect(int n)
{
    int i,sum=0;
	for(i=1;i<n;i++);
	{	
        if(n%i==0)
		{  
            sum=sum+i;
		}
	}
	if(sum==n)
	{ 
        return 0;
	}
    else
    {
	    return 1;
    }
}