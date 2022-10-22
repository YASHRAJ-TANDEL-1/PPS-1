#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],n,k,i;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n ");
	for(i=0;i<n;i++)
    {
	    scanf("%d",&arr[i]);
    }
	printf("Enter element location you wish to delete:");
	scanf("%d",&k);
	if(k>n)
	  printf("Deletion of element is not possible.");
	else
	{	
        for(i=k;i<n;i++)
        {
		    arr[i]=arr[i+1];
        }
		printf("Resultant array after deletion:");
		for(i=0;i<n-1;i++)
        {
		   printf("%d ",arr[i]);
        }
	}
getch();
}