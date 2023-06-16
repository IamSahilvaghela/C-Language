#include<stdio.h>

main()
{
	int fn,sn,i,k,p=0;
	
	printf("Enter the first number :");
	scanf("%d",&fn);
	printf("Enter the second number :");
	scanf("%d",&sn);
	
	k=(sn-fn)/4;
	int a[k];
	
	for(i=fn; i<=sn; i++){
		if(i%4==0){
		 	a[p]=fn;
			 p++;		
		}
		fn++;
	}
	
	printf("The array is : \n");
	for(p=0; p<=k; p++){
	printf("%d ",a[p]);
	}
}

