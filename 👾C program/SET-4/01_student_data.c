#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r[50],m[50];
    printf("Enter the number of student detail you want =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ROLL NUMBER OF STUDENT :- ",i+1);
        scanf("%d",&r[i]);
        printf("MARKS OF STUDENT :- ",i+1);
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n ROLL NUMBER :- %d  \n MARKS :- %d",r[i],m[i]);
        printf("\n ----------------------------------------------");
    }
    getch();
}