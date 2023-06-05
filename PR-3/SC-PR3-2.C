#include<stdio.h>
#include<conio.h>
main()
{
	int n,count=0;
	clrscr();

	printf("Enter number :");
	scanf("%d",&n);

	while(n !=0)
	{
		n=n/10;
		count++;
	}

	printf("%d",count);

	getch();
}