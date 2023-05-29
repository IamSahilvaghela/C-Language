#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter the number");
	scanf("%d",&a);

	(a%2==0)
		? printf("your given number is even")
		: printf("your given number is odd");
	getch();
}