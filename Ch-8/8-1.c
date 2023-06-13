#include<stdio.h>

main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]=",i);
		scanf("%d",&a[i]);
		count++;
	}
	
	printf("length of array : %d",count);
}
