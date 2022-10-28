#include<stdio.h>
#include<conio.h>
void main()
{      
    int j[100],h[100],i,k,l,*m,*n;
	printf("Enter an array size:");
	scanf("%d",&k);
	printf("Enter element of 1 array:\n");
	for(i=0;i<k;i++)
	{	
        scanf("%d",&j[i]);
	}
	printf("Enter element of 2 array:\n");
	for(i=0;i<k;i++)
	{	
        scanf("%d",&h[i]);
	}
	m=j;
	n=h;
	for(i=0;i<k;i++)
	{       
        l=*m;
		*m=*n;
		*n=l;
		m++;
		n++;
	}
	for(i=0;i<k;i++)
	{	
        printf("\nElement of 1 array:%d   Element of 2 array:%d",j[i],h[i]);
        printf("\n-------------------------------------------------------------------\n");
	}
	getch();
}