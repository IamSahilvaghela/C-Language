#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	clrscr();

	printf("Enter..\n");
	printf("1) For English\n");
	printf("2) For Hindi\n");
	printf("3) For Gujrati\n");
	printf("Enter your comfortable language:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("1) Prees 1 For Internet Recharge\n");
			printf("2) Prees 2 For Top-Up Recharge\n");
			printf("3) Prees 3 For Special Recharge\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					printf("You have Succesfully Done Internet Recharge\n");
					break;
				case 2:
					printf("You have Succesfully Done Top-Up Recharge\n");
					break;
				case 3:
					printf("You have Succesfully Done Special Recharge\n");
					break;
				default:
					printf("invalid choice\n");
			}
			break;
		case 2:
			printf("1) Internet Recharge ke liye 1 dabaiye\n");
			printf("2) Top-Up Recharge ke liye 2 dabaiye\n");
			printf("3) Special Recharge ke liye3 dabaiye\n");
			printf("aap ki pasand bataiye\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					printf("aap ka Internet Recharge safaltapurvak ho gaya hain\n");
					break;

				case 2:
					printf("aap ka Top-Up  Recharge safaltapurvak ho gaya hain\n");
					break;
				case 3:
					printf("aap ka Special Recharge safaltapurvak ho gaya hain\n");
					break;
				default:
					printf("ayogya pasand\n");
					break;

			}
			break;

		case 3:

			printf("1) Internet Recharge mate 1 dabavo\n");
			printf("2) Top-Up Recharge mate 2 dabavo\n");
			printf("3) Special Recharge mate 3 dabavo\n");
			printf("tamari pasand dabavo\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					printf("tamaru Internet Recharge safaltapurvak thai gayu chhe\n");
					break;
				case 2:
					printf("tamaru Top-Up Recharge safaltapurvak thai gayu chhe\n");
					break;
				case 3:
					printf("tamaru Special Recharge safaltapurvak thai gayu chhe\n");
					break;
				default:
					printf("ayogya pasand\n");
					break;
			}
			break;



		default:
			printf("invalid choice\n");
		}
	getch();
}