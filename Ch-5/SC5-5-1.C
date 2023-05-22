#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter  a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);

	if (a>b)
	{
		printf("minimum number is:%d",b);
	}
	else if (a<b)
	{
		printf("minimum number is:%d",a);
	}
	else
	{
		printf("invalid number");
	}
	getch();
}