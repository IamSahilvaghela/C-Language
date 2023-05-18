#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("Swap A: %d\nSwap B:%d",a,b);


	getch();
}