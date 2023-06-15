#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter number of row :");
	scanf("%d",&r);
	printf("Enter number of column :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}
	}		
		printf("Avrege : %d",sum/(r*c));
	
}
