#include <stdio.h>
int main(){
	int arr[2][2];
	int tra[2][2];
	
	
	int i, j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d x %d=", i, j);
		scanf("%d", &arr[i][j]);
		}
		printf("\n");
		
	}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	tra[j][i]=arr[i][j];
		}
		printf("\n");
		
	}
	printf("The transpose \n<-------->\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d ",tra[i][j]);
		}
		printf("\n");
		
	}
	return 0;
	
	

	
	
	
}