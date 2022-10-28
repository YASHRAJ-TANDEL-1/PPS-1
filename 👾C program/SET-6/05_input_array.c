#include<stdio.h>
#include<conio.h>
void main()
{
    int *a[50],n,i;
    printf("Enter array size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number :");
        scanf("%d",&a[i]);
    }
    printf("\n ------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("value of array : %d \n",&*a[i]);
    }
    getch();
}