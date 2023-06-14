#include<stdio.h>

main()
{
	int n;
	
	printf("Enter number of Array : ");
	scanf("%d",&n);
	
	int a[n],b[n],i;
	
	for(i=0; i<n; i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		b[i] = a[i] * a[i];
	}
	for(i=0; i<n; i++){
		printf("a[%d] : %d\tb[%d] : %d\n",i,a[i],i,b[i]);
	}
}
