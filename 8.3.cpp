#include <stdio.h>

int main(){
	int a,i,j;
	printf("moi ban nhap 1 so bat ky: ");
	scanf("%d",&a);
	int ar[a][a];
	for (i = 0; i < a; i ++){
		for (j = 0; j< a; j ++){
			printf("moi nhap phan tu cua ban [%d][%d]: ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	
	for (i = 0; i < a; i ++){
		for (j = 0; j< a; j ++){
			printf("%d   ",ar[i][j]);
	}
	printf("\n");
	}
	
	
	return 0;
}
