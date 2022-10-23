#include<stdio.h>
#include<conio.h>
int interchange(int,int);
int main()
{
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a); 
    printf("Enter the second number :");
    scanf("%d",&b);
    interchange(a,b);  
}
int interchange(int a,int b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("----------------------------------------------\n ");
    printf("AFTER EXHCHANGE");
    printf("\n First number : %d",a);
    printf("\n Secong number : %d",b);
}