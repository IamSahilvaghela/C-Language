#include<stdio.h>
#include<conio.h>

main()
{
	int n,sum=0,fd,ld;
	clrscr();

	printf("Enter a number :");
	scanf("%d",&n);

	ld=n%10;

	while(n>=9)
	{
		n=n/10;
	}

	fd=n;

	sum= ld + fd;
	printf("sum of first and last digit is : %d",sum);

	getch();
}