#include <stdio.h>

int main()
{
    while (1){
   
    double n1, n2;

    printf("\n Bem vindo \n");
    printf("\n Operações disponíveis: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");

    printf("\n Insira o primeiro número: ");
    scanf("%lf", &n1);
    printf("\n Insira o segundo número: ");
    scanf("%lf", &n2);

    double somaresult = n1 + n2;
    double subresult = n1 - n2;
    double multresult = n1 * n2;
    double divresult = n1 / n2;

    printf("\n A soma é: %.2lf \n", somaresult);   // printf("A soma é: %.2lf \n", &somaresult);
    printf("\n A subtração é: %.2lf \n", subresult);
    printf("\n A multiplicação é: %.2lf\n", multresult);

    if (n2 == 0){
        printf("\n Não existe divisão por 0 \n");
    }

    else{
        printf("\n A divisão é: %.2lf \n", divresult); 
    }

    printf("\n Feito por Giovana Assis - Sistemas de Informação \n");
    
}
    return 0;
}
