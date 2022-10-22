#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,arr[100],sum=0;
    printf("Enter array size you want = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ELEMENT %d:",i+1);
        scanf("%d",&arr[i]);
        sum= sum + arr[i];
    }
    printf("\n Sum of array element is %d",sum);
    getch();
}