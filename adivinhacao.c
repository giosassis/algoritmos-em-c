//gcc adivinhacao.c -o adivinhacao.out//
#include <stdio.h>

/*#define NUMERO_DE_TENTATIVAS 5 //equivalente ao const em javascript//*/

int main() {
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while (ganhou == 0) { 

        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);

        printf("Seu chute foi %d \n", chute);

        if (chute < 0) {
         printf("Você não pode chutar um número negativo\n");
        continue; 
        }

         int acertou = (chute == numerosecreto);
         int maior = chute > numerosecreto; 
        
        if (acertou){
            printf("Parabéns, você acertou!\n");
            
            break;
        }

        else if (maior){
            printf("O seu chute é maior que o número secreto.\n");
        }

        else {
            printf("O seu chute foi menor que o número secreto.\n");
        }

        tentativas = tentativas +1;
    }

    printf("Você venceu na tentativa %d\n", tentativas);
}