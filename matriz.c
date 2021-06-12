#include <stdio.h>

int main(void) {
	int matriz[3][3], i,j;
    
    printf("\nDigite os elementos da matriz \n");

    for(i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        };
    };
    
    printf("\n\nMatriz multiplicada por 5\n");

    for(i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Elemento[%d][%d] = %d \n", i, j, 5*(matriz[i][j]));
        };
    };
	return 0;
}
