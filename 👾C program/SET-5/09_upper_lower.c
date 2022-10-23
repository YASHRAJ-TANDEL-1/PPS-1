#include<stdio.h>
#include<conio.h>
#include<string.h>
char uppercase(char []);
void main()
{	
    char j[100];
	printf("Enter a string:");
	gets(j);
	printf("String in upper case:%s");
	uppercase(j);
	getch();
}
char uppercase(char j[])
{	
    puts(strupr(j));
	return 0;
}