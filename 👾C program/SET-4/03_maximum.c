#include<stdio.h>
#include<conio.h>
void main()
{
    int n,max,i,arr[100];
    printf("Enter array size you want = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\n %d is the maximum value in array",max);
    getch();
}