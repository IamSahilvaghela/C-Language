#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,max;
	clrscr();

	printf("Enter a , b , c and d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	max=(a>b)
		? (a>c)
			? (a>d)
				? a
				: d
			: (c>d)
				? c
				: d
		:(b>c)
			? (b>d)
				? b
				: d
			: (c>d)
				? c
				: d ;
	printf("maximum value is:%d",max);
	getch();
}