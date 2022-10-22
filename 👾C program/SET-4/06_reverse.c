#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,arr[100];
    printf("Enter array size you want = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ELEMENT POSITION %d:",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("=================================================\n ");
    for(i=n-1;i>=0;i--)
    {
        printf("reverse of array %d \n",arr[i]);
    }
    getch();
}