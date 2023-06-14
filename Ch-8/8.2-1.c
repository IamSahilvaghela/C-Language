#include<stdio.h>

main()
{
	int n;
	printf("Enter number of A's array :");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter array A's elements :\n");
	
	for(i=0; i<n; i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	
	int z;
	printf("\nEnter number of B's array :");
	scanf("%d",&z);
	
	int b[z];
	printf("Enter array B's elements : \n");
	
	for(i=0; i<z; i++){
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);	
	}
	
	printf("Array C is : \n");
	
	for(i=0; i<n; i++){
		printf("%d,",a[i]);
	}
	
	for(i=0; i<z; i++){
		printf("%d,",b[i]);
	}
}
