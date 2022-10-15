#include<stdio.h>
#include<conio.h>
void main()
{	
    int j;
	printf("Enter the value:");
	scanf("%d",&j);
	printf("\n Preunary for increment is %d",++j);
	printf("\n Preunary for decrement is %d",--j);
	printf("\n Postunary for incrment is %d",j++);
	printf("\n Postunary for decrement is %d",j--);
 	getch();
}