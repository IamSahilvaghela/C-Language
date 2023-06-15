#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter number of row :");
	scanf("%d",&r);
	printf("Enter number of column :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(i==0 || j==0 || i==r-1 || j==c-1){
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}		
}
