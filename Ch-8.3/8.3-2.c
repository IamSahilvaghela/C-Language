#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter number of row :");
	scanf("%d",&r);
	printf("Enter number of column :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j,sum=0;
	
	printf("Enter array A's elements :\n");
		
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter array B's elements :\n");
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		
	printf("Array C is : \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}	
}
