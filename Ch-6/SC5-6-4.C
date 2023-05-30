#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter starting point :");
	scanf("%d",&n);

	while(i<=n)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		n--;
	}
	getch();
}