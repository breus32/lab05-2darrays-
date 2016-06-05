#include <stdio.h>

int main(){
	
	int mas[100][100], i, j, n;
    
    printf("Enter matrix size: ");
    scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		for ( j = 0; j < n; j++){
			if(i == n - j - 1){
				mas[i][j] = i + 1;
			} else {
				mas[i][j] = 0;
			}
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
		    printf("%3d", mas[i][j]);	
		}
		printf("\n");
	}

	return 0;
}

