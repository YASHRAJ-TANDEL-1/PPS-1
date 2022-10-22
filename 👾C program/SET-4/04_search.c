#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,arr[100],search;
    printf("Enter array size you want = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ELEMENT POSITION %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element you want to search:");
	scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d is the element you want is at position %d \n",search,i+1);
        }
    }
    getch();
}