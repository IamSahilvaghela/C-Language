#include<stdio.h>

main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i,count=0;
	
	printf("\n Enter A's elements\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter B's elements\n");
	for(i=0; i<n; i++)
	{
		printf("Enter b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("Array C is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d,",a[i]+b[i]);
	}
}
