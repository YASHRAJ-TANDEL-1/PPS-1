#include<stdio.h>
#include<conio.h>
void main()
{
    int j,i,max,min;
	printf("Enter any number:");
	scanf("%d",&j);
	max=j;
	min=j;
	for(i=1;i<=10;i++)
	{       printf("Enter any number:");
		scanf("%d",&j);
		if(j>max)
        {
		    max=j;
        }
        if(j<min)
        {
		    min=j;
        }
	}
	printf("\n The Maximum number is %d",max);
	printf("\n The Minimum number is %d",min);
    getch();
}