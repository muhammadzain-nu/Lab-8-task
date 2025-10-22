#include <stdio.h>
int main(){
	int m1[2][2];
	int m2[2][2];
	int sum[2][2];
	int i, j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("Enter the %d x %d for matrix 1 ", i, j);
		scanf("%d", &m1[i][j]);
			printf("Enter the %d x %d for matrix 2 ", i, j);
		scanf("%d", &m2[i][j]);
		sum[i][j]=m1[i][j]+m2[i][j];
		}
		printf("\n");
		
	}
	printf("The sum \n<-------->\n ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf(" %d ",sum[i][j]);
		}
		printf("\n");
		
	}
	return 0;
	
	

	
	
	
}