#include<stdio.h>
#include<conio.h>
void main()
{	
    int *m,i,j,k,l;
	printf("Enter array size:");
	scanf("%d",&k);
	printf("Enter array element:\n");
	for(i=0;i<k;i++)
	{	
        scanf("%d",m+i);
	}
	for(i=0;i<k;i++)
	{	
        for(j=i+1;j<k;j++)
		{ 
            if(*(m+i)>*(m+j))
			{ 
                l=*(m+i);
			    *(m+i)=*(m+j);
			    *(m+j)=l;
			}
		}
	}
	printf("Element of array after sorting:");
	for(i=0;i<k;i++)
	{	
        printf("%d ",*(m+i));
	}
	getch();
}