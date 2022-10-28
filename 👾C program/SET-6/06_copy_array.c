#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50],n,i;
    int *x=a;
    int *y=b;
    int *last;
    printf("Enter array size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number :");
        scanf("%d",&a[i]);
    }
    last=&a[n-1];
    printf("value of array 1 :\n");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    while(x <= last)
    {
        *y=*x;
        x++;
        y++;
    }
    printf("\n Value of array 2 :\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(b+i));
	}
    getch(); 
}