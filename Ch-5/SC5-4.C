#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,minimum;
	clrscr();

	printf("Enter a , b and c:");
	scanf("%d%d%d",&a,&b,&c);

	max=(a<b)
		? (a<c)
			? a
			: c
		:(b<c)
			? b
			: c;
	printf("minimum value is:%d",minimum);
	getch();
}