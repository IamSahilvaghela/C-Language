#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k=0;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=i; j<=5; j++)
		{
			k++;
			printf("%d ",k);
		}
		printf("\n");
	}
	getch();
}