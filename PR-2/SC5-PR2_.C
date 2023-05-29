#include<stdio.h>
#include<conio.h>
main()
{
	int unit,bill,a;
	clrscr();
	printf("Enter Electricity Unit:");
	scanf("%d",&unit);

	if(unit<=50 && unit>=0)
	{
		bill=unit*0.5;
	}
	else if(unit<=150 && unit>50)
	{
		bill=(unit-50)*0.75+25;
	}
	else if(unit<=250 && unit>150)
	{
		bill=(unit-150)*1.2+100;
	}
	else if(unit>250)
	{
		bill=(unit-250)*1.5+220;
	}
	else
	{
		printf("Invalid Unit!!");
	}

	a=bill*20/100+bill;
	printf("Electricity  Bill: %d",a);
	getch();
}