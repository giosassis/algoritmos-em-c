#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroinicial, numerofinal;
    int totalnumeropar = 0;

    printf("Digite o primeiro número: \n");     
    scanf("%d", &numeroinicial); 

    printf("Digite o segundo número: \n");
    scanf("%d", &numerofinal);

    for (int i = numeroinicial; i <= numerofinal; i++){
        if (i %2){
        printf("\n Este número é impar: %d\n", i);
        }

        else{
            printf("\n Este número é par: %d\n", i);
            totalnumeropar++;
        }
    }
    printf("\n O total de número par encontrado foi: %d\n", totalnumeropar);
}
