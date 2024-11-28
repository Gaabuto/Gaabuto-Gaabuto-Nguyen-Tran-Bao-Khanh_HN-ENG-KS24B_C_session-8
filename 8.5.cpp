#include <stdio.h>

int main(){
	int ar[3][3] = {
     {1,2,3},
	 {4,5,6},
	 {7,8,9}
	};
	int n = 3, a;
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        	if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                a += ar[i][j];
            }
        }
    }
    printf("tong phan tu la %d", a);
	
	
	
	return 0;
}
