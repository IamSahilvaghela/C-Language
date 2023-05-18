#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("A:%d\nB:%d",a,b);
	getch();
}