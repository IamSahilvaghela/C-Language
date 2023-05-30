#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("Enter starting year :");
	scanf("%d",&i);
	printf("Enter ending year :");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
		i++;
	}
	getch();
}