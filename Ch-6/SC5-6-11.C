#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,mlt=1;
	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		mlt= mlt * i;
	}

	printf("%d",mlt);

	getch();
}