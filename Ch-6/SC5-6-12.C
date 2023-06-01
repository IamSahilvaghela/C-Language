#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter A:");
	scanf("%d",&a);

	for(b=1;b<=10;b++)
	{
		printf("%d * %d = %d\n",a,b,a*b);
	}
	getch();
}