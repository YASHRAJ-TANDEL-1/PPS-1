#include<stdio.h>
#include<conio.h>
void main()
{
    int f1=0,f2=1,f3,n,i;
    printf("Enter the number of terms you want =");
    scanf("%d",&n);
    printf("FIBONACCI SERIES :-\n");
    for(i=1;i<=n;++i)  
    {
        printf("%d",f1);
        f3= f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("\n");
    }  
    getch();
}